<div align="center">
  <h1>Data Structures and Algorithms Using C and C++</h1>
</div>
  <h3>Notes from the Udemy course created by <a href=https://www.udemy.com/course/datastructurescncpp/>Abdul Bari</a>.</h3>

## To Set Up Locally

## Requirements

* [Git](http://git-scm.com/)
* An IDE such as [Visual Studio Code](https://code.visualstudio.com/)

### For Mac users

* A compiler such as [Clang](https://clang.llvm.org/) which comes built-in with [XCode](https://developer.apple.com/xcode/)

### For Windows users

* A compiler such as [GCC](https://gcc.gnu.org/)

To copy the repository's files from here onto your computer and to view and serve those files locally, at your computer's command line type:
```bash
git clone https://github.com/mvrad/dsa_using_c_and_cpp.git
```
Open the files in an IDE such as [Visual Studio Code](https://code.visualstudio.com/).

### Using Clang with Visual Studio Code

For Mac users who want to use Visual Studio Code as their C++ IDE, install Microsoft's [C++ Extension for VS Code](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) in the extensions view in VS Code.

Ensure Clang is installed.
```Bash
clang --version
```

You will need to create a tasks.json file and replace the contents of that file with the following:
```JSON
{
  // See https://go.microsoft.com/fwlink/?LinkId=733558
  // for the documentation about the tasks.json format
  "version": "2.0.0",
  "tasks": [
    {
      "type": "shell",
      "label": "clang++ build active file",
      "command": "/usr/bin/clang++",
      "args": [
        "-std=c++17",
        "-stdlib=libc++",
        "-g",
        "${file}",
        "-o",
        "${fileDirname}/${fileBasenameNoExtension}"
      ],
      "options": {
        "cwd": "${workspaceFolder}"
      },
      "problemMatcher": ["$gcc"],
      "group": {
        "kind": "build",
        "isDefault": true
      }
    }
  ]
}
```

More information about the tasks.json file can be found [here](https://code.visualstudio.com/docs/cpp/config-clang-mac).