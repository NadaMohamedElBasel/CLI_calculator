"""This module tests the python package ."""

import unittest
import py_calculator


# class MyTestCase(unittest.TestCase):
#     def test_something(self):
#         self.assertEqual(True, False)  # add assertion here


class TestPyCalculator(unittest.TestCase):
    """Unit tests for py_calculator bindings."""

    def test_add(self):
        """Test the add function."""
        self.assertEqual(py_calculator.add(2, 3), 5)
        self.assertEqual(py_calculator.add(-5, -10), -15)
        self.assertEqual(py_calculator.add(0, 0), 0)

    def test_sub(self):
        """Test the subtract function."""
        self.assertEqual(py_calculator.sub(5, 3), 2)
        self.assertEqual(py_calculator.sub(-5, -10), 5)
        self.assertEqual(py_calculator.sub(0, 0), 0)

    def test_mul(self):
        """Test the multiplication function."""
        self.assertEqual(py_calculator.mul(2, 4), 8)
        self.assertEqual(py_calculator.mul(-3, 4), -12)
        self.assertEqual(py_calculator.mul(0, 100), 0)
        self.assertEqual(py_calculator.mul(100000, 100000), 10000000000)

    def test_div(self):
        """Test the division function."""
        self.assertAlmostEqual(py_calculator.divide(10, 2), 5.0)
        with self.assertRaises(ZeroDivisionError):
            py_calculator.divide(10, 0)

    def test_invalid_args(self):
        """Test for any invalid arguments."""
        with self.assertRaises(TypeError):
            py_calculator.add("a", "b")


if __name__ == "__main__":
    print("Running Python unit test...")
    unittest.main()
    print("Python test passed!")
