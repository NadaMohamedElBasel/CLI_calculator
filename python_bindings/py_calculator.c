//
// Created by Admin on 6/2/2025.
//
#include <Python.h>
#include "calculator.h"
// Python wrapper for add
static PyObject* py_add(PyObject* self, PyObject* args)
{
    int a, b;
    if (!PyArg_ParseTuple(args, "ii", &a, &b))
        return NULL;
    return PyLong_FromLong(add(a, b));
}
// Python wrapper for sub
static PyObject* py_sub(PyObject* self, PyObject* args)
{
    int a, b;
    if (!PyArg_ParseTuple(args, "ii", &a, &b))
        return NULL;
    return PyLong_FromLong(sub(a, b));
}

// Python wrapper for mul
static PyObject* py_mul(PyObject* self, PyObject* args)
{
    int a, b;
    if (!PyArg_ParseTuple(args, "ii", &a, &b))
        return NULL;
    long long result = mul(a, b);
    return PyLong_FromLongLong(result);
}

static PyObject* py_power(PyObject* self, PyObject* args)
{
    int a, b;
    if (!PyArg_ParseTuple(args, "ii", &a, &b))
        return NULL;
    long long result = power(a, b);
    return PyLong_FromLongLong(result);
}

// Python wrapper for div
static PyObject* py_divide(PyObject* self, PyObject* args)
{
    float a, b;
    if (!PyArg_ParseTuple(args, "ff", &a, &b))
        return NULL;
    if (b == 0.0f)
    {
        PyErr_SetString(PyExc_ZeroDivisionError, "division by zero");
        return NULL;
    }
    return PyFloat_FromDouble(divide(a, b));
}

static PyMethodDef Methods[] = {{"add", py_add, METH_VARARGS, "Add two numbers"},
                                {"sub", py_sub, METH_VARARGS, "Subtract two integers"},
                                {"mul", py_mul, METH_VARARGS, "Multiply two integers"},
                                {"power", py_power, METH_VARARGS, "power a float number"},
                                {"divide", py_divide, METH_VARARGS, "Divide two floats"},
                                {NULL, NULL, 0, NULL}};

static struct PyModuleDef module = {PyModuleDef_HEAD_INIT, "py_calculator", NULL, -1, Methods};

PyMODINIT_FUNC PyInit_py_calculator(void) { return PyModule_Create(&module); }
