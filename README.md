# License-designating header

This header defines the `LICENSE()` macro
that can be used in C/C++ programs.

The macro accepts a single string argument
and ensures that it is saved in the object/binary
that results from compiling the source code file.

## Example

Typical use, in a file `foo.c`:
``` C
#include "license.h"

LICENSE("MIT")


... // rest of the code
```
