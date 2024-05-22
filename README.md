![Title](https://i.imgur.com/IL2hIvX.png)
# Introduction #
OpenMP (Open Multi-Processing) is an API (Application Programming Interface) that makes it easier to write programs that can run on multiple processors or cores. It's designed for shared-memory parallel programming, meaning all the processors can access the same memory. OpenMP is supported for C, C++, and Fortran.

# Install on CodeBlocks #
1. Download and install Codeblocks and choose the default GNU  GCC compiler.
2. Open "Compiler and debugger settings", put `-fopenmp` in "other options", and `-lgomp -pthread` in "Other linker options".
3. Add `C:\Program Files (x86)\CodeBlocks\MinGW\lib\gcc\mingw32\bin` to  "Compiler and debugger settings" -> "Toolchain Executables" -> Additional Paths ->Add.

# Verify #
Copy this simple code snippet and compile to see the OpenMP version.

```c
#include <stdio.h>
#include <omp.h>

int main() {
    // Check whether OpenMP is installed and get the OpenMP version
    printf("OpenMP version: %d\n", _OPENMP);
    return 0;
}
```
Versions are as follows.
- OpenMP 2.0: _OPENMP is defined as 200203
- OpenMP 2.5: _OPENMP is defined as 200505
- OpenMP 3.0: _OPENMP is defined as 200805
- OpenMP 4.0: _OPENMP is defined as 201307
- OpenMP 4.5: _OPENMP is defined as 201511
- OpenMP 5.0: _OPENMP is defined as 201811
- OpenMP 5.1: _OPENMP is defined as 202011