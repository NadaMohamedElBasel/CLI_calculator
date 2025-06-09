from setuptools import setup, Extension

################# BEFORE PACKING #################
setup(
    name="py_calculator",
    version="1.0",
    description="Python binding for C calculator",
    ext_modules=[
        Extension(
            "py_calculator",
            sources=[
                "python_bindings/py_calculator.c",
                "calc/calculator.c",
                #"calc/calculator.h", causing commit error
            ],
            include_dirs=["calc"],
        )
    ],
)


# ############## PACKING ###############
# setup(
#     name='py_calculator',
#     version='1.0',
#     description='Python binding for C calculator',
#     ext_modules=[
#         Extension(
#             'py_calculator_pack.c_calculator', # renamed
#             sources=['python_bindings/py_calculator.c', 'calc/calculator.c'],
#             include_dirs=['calc']
#         )
#     ],
#     packages=['py_calculator_pack'],
# )
