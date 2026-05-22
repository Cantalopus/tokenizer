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