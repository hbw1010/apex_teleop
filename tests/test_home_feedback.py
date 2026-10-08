"""回零误差、完整反馈和新鲜度是进入真机跟随的必要条件。"""

from pathlib import Path
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "scripts"))
from motion_control import HomeFeedback, JOINT_NAMES
from sensor_msgs.msg import JointState


def feedback(stamp, value=0.08):
    message = JointState(name=list(JOINT_NAMES), position=[value] * 21)
    message.header.stamp.sec = stamp
    return message


class HomeFeedbackTests(unittest.TestCase):
    def test_relaxed_tolerance_requires_short_stability_not_exact_zero(self):
        state = HomeFeedback(0.1, 0)
        state.update(feedback(1), 0.0)
        self.assertFalse(state.reached(0.1))
        state.update(feedback(2), 0.16)
        self.assertTrue(state.reached(0.16))
        self.assertFalse(state.reached(0.7))

    def test_one_outside_joint_restarts_stability(self):
        state = HomeFeedback(0.1, 0)
        state.update(feedback(1), 0.0)
        outside = feedback(2)
        outside.position[-1] = 0.11
        state.update(outside, 0.2)
        self.assertFalse(state.reached(0.2))
        state.update(feedback(3), 0.21)
        self.assertFalse(state.reached(0.21))
        state.update(feedback(4), 0.4)
        self.assertTrue(state.reached(0.4))

    def test_missing_or_nonfinite_joint_is_not_zero(self):
        for kind in ("missing", "nan", "duplicate"):
            with self.subTest(kind=kind):
                state = HomeFeedback(0.1, 0)
                state.update(feedback(1), 0.0)
                invalid = feedback(2)
                if kind == "missing":
                    invalid.name.pop()
                    invalid.position.pop()
                elif kind == "nan":
                    invalid.position[0] = float("nan")
                else:
                    invalid.name[-1] = invalid.name[0]
                state.update(invalid, 0.2)
                self.assertFalse(state.reached(0.2))

    def test_old_or_repeated_samples_cannot_prove_arrival(self):
        state = HomeFeedback(0.1, 2_000_000_000)
        state.update(feedback(1), 0.0)
        state.update(feedback(2), 0.2)
        self.assertFalse(state.reached(0.2))
        state.update(feedback(3), 0.3)
        state.update(feedback(3), 0.5)
        self.assertFalse(state.reached(0.5))
        state.update(feedback(4), 1.0)
        self.assertFalse(state.reached(1.0))


if __name__ == "__main__":
    unittest.main()
