add_library(MathFunctions Application.cpp)

# interface means things that consumers require but the producer doesn't.
target_include_directories(MathFunctions
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
)

# Install rules: install the library at a lib folder and
# a header file to a include folder
install(TARGETS MathFunctions DESTINATION lib)
install(FILES MathFunctions.h DESTINATION include)