add_library(MathFunctions Application.cpp)

# interface means things that consumers require but the producer doesn't.
target_include_directories(MathFunctions
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
)