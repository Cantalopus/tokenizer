For CMake presets use:

`cmake --list-presets`

Then for CMake preset build:

`cmake --preset=<preset> -S <src> -B <build>`

For clean builds use:

`cmake --fresh -S <src> -B <build>`

The `make` command builds the binary `./bin/app` using the `clang++` compiler.

compiled with: 
    `-std=c++20` 
    `-Wall` 
    `-Wextra` 
    `-g` debugging info

Available make targets:

- `all`
- `run`
- `clean`

{
    // launch.json for vscode
    "version": "0.2.0",
    "configurations": [
        {
            "name": "Launch",
            "type": "lldb",
            "request": "launch",
            "program": "${workspaceFolder}/bin/app",
            "args": [],
            "cwd": "${workspaceFolder}"
        }
    ]
}