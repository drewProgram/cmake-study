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
To add a library to another a project, you need to create a CMakeLists in the library folder (see MathFunctions folder).

## Installing project
It's simple to install a project. You just need to use `install` commands with a couple of options, as you can see on the CMakeLists files. To install the project, you need to use the command (at the build folder):
```cpp
cmake ../
cmake --build .
cmake --install . --config Debug
```
The config flag is needed because in Visual Studio projects you have more than one build type. As it seems, the default on the install command is always Release, so we need to set to Debug the installation in order to work (unless you have builded the project in Release mode with `--build . -- config Release`).
CMake will install the project by default at the C:/Program Files (x86)/{ProjectName}

**Note: The terminal you're using needs to be executed with admin privileges in order to this command work.**