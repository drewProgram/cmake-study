# version
cmake_minimum_required(VERSION 3.10)

# set project name and version
project(Test VERSION 1.0)

# specifing that MathFunctions lib is optional
option(USE_MYMATH "Use test provided math implementations" ON)

# header file to pass the version number to the source code
configure_file(src/TestConfig.h.in TestConfig.h)

# specify C++ version
set(CMAKE_CPP_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# making building and linking the MathLibrary conditional
if (USE_MYMATH)
    # adding the MathFunctions library
    add_subdirectory(MathFunctions)
    # creating variables EXTRA_LIBS
    list(APPEND EXTRA_LIBS MathFunctions)
endif()

# add an executable
add_executable(Test src/Main.cpp)

## specifing which library will be linked
target_link_libraries(Test PUBLIC ${EXTRA_LIBS})

# Add the binary tree to the search path for include files so
# that we will find TestConfig.h
target_include_directories(Test PUBLIC
    "${PROJECT_BINARY_DIR}"
)

# install rules 
install(TARGETS Test DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/TestConfig.h"
    DESTINATION include
)