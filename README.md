# C-NumPy :rocket:

A high-performance numerical computing library in C, replicating core NumPy functionality.

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)
![C Standard](https://img.shields.io/badge/C-99-orange)

## Features

- **Multi-dimensional arrays** with configurable data types
- **Array creation routines**: zeros, ones, arange
- **Mathematical operations**: add, subtract, multiply
- **Reduction operations**: sum, mean, max
- **Linear algebra**: dot product
- **File I/O**: load/save arrays from/to text files

## Quick Start

### Prerequisites
- C compiler (gcc/clang)
- CMake (≥ 3.10) [optional]

### Building
```bash
# Basic build
gcc -O3 -o cnumpy src/*.c -lm

# With CMake
mkdir build && cd build
cmake ..
make

```
