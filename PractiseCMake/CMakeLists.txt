cmake_minimum_required(VERSION 3.0.0)
project(HelloWorld VERSION 0.1.0)

set (CMAKE_CXX_STANDARD 11)

include(CTest)
enable_testing()

add_executable(HelloWorld main.cpp Pet.cpp 
                MoveConstructor.cpp BraceInitialization.cpp)

set_target_properties(HelloWorld PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS ON
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
