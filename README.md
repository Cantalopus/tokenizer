
There are 2 ways to build:
1. Using `CMake` Presets
2. Using Root Directory `Makefile`

#################################################################

1. Building with `CMake` Presets

    To see available presets use command:
        `cmake --list-presets`

    To build with `CMake` use command:
        `cmake --preset <preset>`

    Example:
        `cmake --preset debug`

2. Build with `make` for debugging.

    To build with `make` use :
        `make`

    `make` targets include:
        `all`
        `run`
        `clean`