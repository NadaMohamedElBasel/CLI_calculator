# CLI Calculator

a command-line calculator that performs: addition, subtraction, multiplication, and division with the following architecture:  
- Core Backend Logic implemented in C.  
- Python Interface with setup.py and pyproject.toml (exposed to Python using the C-Python API).   
- Usable as a python API (to be able to import it and use it in a python environment).   
- Also usable as a CLI tool .  
- Comprehensive unit tests for both the C and Python components separated and independently executable.  
- A Makefile with functional targets: build, test, clean, test_c , run_c_tests , test_py , run_py_tests , rebuild , install , dist , format , lint , docs , help.   
- CI/CD with GitHub Actions: Automated workflows for building, testing, code scanning using black (Python formatter) , pylint (Python linter) , clang-format (C formatter check) and cppcheck (C static analyzer).  
- documentation using Sphinx.  
- Ninja as an alternative to Make for building the C backend  .
- pre-commit hooks for code formatting, linting.


## Features

- Perform basic arithmetic operations (addition, subtraction, multiplication, division) from the terminal as a CLI tool or via Python Interface.
- Python bindings via a C extension (`py_calculator`).
- Includes automated code formatting, linting, and documentation.
- Supports builds using `Make` or `Ninja`.

---

## Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/NadaMohamedElBasel/CLI_calculator.git
cd CLI_calculator
```
### 2. Usage examples as a CLI tool from cmake-build-debug  
```bash
cd cmake-build-debug
CLI_calculator.exe add 2 3
CLI_calculator.exe sub 5 3
CLI_calculator.exe mul 2 3
CLI_calculator.exe divide 10.0 5.0
```
### 3. Usage examples as a Python Interface from project root (CLI_calculator) 
```bash
python
import py_calculator
print(py_calculator.add(2, 3))          # Output: 5
print(py_calculator.sub(5, 3))          # Output: 2 
print(py_calculator.mul(2, 3))          # Output: 6
print(py_calculator.divide(10.0, 5.0))  # Output: 2.0
```
or from project root (CLI_calculator) 
```bash
python usage.py 
```
### 4. Build instructions :  
```bash
make build 
```
or  
```bash
ninja
```  
### 5. Run unit tests  
for c testing from project root (CLI_calculator)
```bash
test_c.exe 
```
or from project root (CLI_calculator)
```bash
make run_c_tests
```
for python testing from tests 
```bash
cd tests
python test_py_calculator.py 
```
or from project root (CLI_calculator)
```bash
make run_py_tests
```
## Open project documentation using any browser from docs>build>html>index.html    
## Project Structure 
CLI_calculator/  
├── calc/                          # C source code  
│   ├── calculator.c  
│   ├── calculator.h  
│   └── test_calculator.c         # Unit tests for C  
│  
├── python_bindings/              # Python bindings using C extension  
│   ├── py_calculator.c                     
│  
├── src/               
│   ├── main.c  
├── tests/                
│   ├── test_py_calculator.py                     
├── CMakeLists.txt                # Root CMake file  
├── setup.py                      # Python packaging for entire project  
├── pyproject.toml  
├── py_calculator.pyd  
│    
├── usage.py                      # Sample usage of Python bindings  
│ 
├── Makefile  
├── .pylintrc  
├── .pre-commit-config.yaml    
├── .clang-format    
├── test_c.exe    
│  
├── build/                        # CMake build directory   
│   └── ...    
│  
├── dist/                         # Python packaging output   
│   └── ...    
│─ build-ninja/  
│   └── ...  
├── .github/                             
│   ├── workflows/    
│        ├── build.yml    
├── cmake/                            
│   └── ...    
│── docs/                             
│   └── ...     
├── cmake-build-debug/                              
│   └── ...   
├── py_calculator.egg-info  /                              
│   └── ...  
├── README.md   
├── requirements.txt  
   

