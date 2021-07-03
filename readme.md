# CMake
Developing a basic C++ project to test how CMake works.

## Project Version
You can define the project version inside CMakeLists.txt.

To do so, create a header file with an extension .h.in and pass it as a parameter to the command `configure_file()`. It would be something like that: 
```
# @param1 - source file; @param2 - output file (path is relative to the build folder)
configure_file(TestConfig.h.in TutorialConfig.h)
```

You also have to include the new file with the version in the include paths of the project.

When CMake configures this header file the values of @Tutorial_VERSION_MAJOR@ and @Tutorial_VERSION_MINOR@ will be replaced.

## Building a project
We have some steps in order to build the project using CMake. First, we can create a folder just for the build files. To accomplish this, we can use console commands.
```
mkdir build
```

To build, do the following (from the build directory):
```cpp
cmake ../
cmake --build .
```
The first command will generate the build files into the build folder and the second command will build and link the generated files. Then, you can execute the generated executable file.

## Adding a library
To add a library to another a project, you need to create a CMakeLists in the library folder (see MathFunctions folder)