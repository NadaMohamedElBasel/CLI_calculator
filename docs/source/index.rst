.. CLI_Calculator documentation master file, created by
   sphinx-quickstart on Mon Jun  2 14:33:07 2025.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

CLI_Calculator documentation
============================

Add your content using ``reStructuredText`` syntax. See the
`reStructuredText <https://www.sphinx-doc.org/en/master/usage/restructuredtext/index.html>`_
documentation for details.


.. toctree::
   :maxdepth: 2
   :caption: Contents:

   usage
   installation
   reference

CLI_Calculator
--------------

This project is a simple CLI calculator with a Python C extension.

Example:

.. code-block:: python

   import py_calculator
   print(py_calculator.add(2, 3))  # Output: 5

