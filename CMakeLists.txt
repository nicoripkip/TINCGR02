cmake_minimum_required(VERSION 3.25.1)

# Project name
project(TINCGR02 VERSION 1.0)

# Set standard compiler
set(CMAKE_MAKE_PROGRAM make FORCE)
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

# Set CXX standard to 14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)

# Include header files
set(HEADER_FILES
    headers/planets.hpp
    headers/shapes.hpp
)

# Include CXX files
set(MAIN_FILE src/main.cpp)
set(OBJECTS_FILES
    src/planets.cpp
    src/shapes.cpp
)

# linked libraries sfml
set(SFML_LIBS 
    sfml-system 
    sfml-graphics 
    sfml-audio 
    sfml-window
)

# Setup the SFML library
find_package(SFML COMPONENTS system window graphics REQUIRED)

# Generate libraries for the objects
add_library(objectInterface STATIC ${OBJECTS_FILES})
target_include_directories(objectInterface PUBLIC headers)

# Create executables
add_executable(${PROJECT_NAME} ${MAIN_FILE} ${HEADER_FILES})
target_link_libraries(${PROJECT_NAME} PRIVATE objectInterface)
target_link_libraries(${PROJECT_NAME} PRIVATE ${SFML_LIBS})