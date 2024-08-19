cmake_minimum_required(VERSION 3.15)
project(MySFMLProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# FetchContent module to download SFML
include(FetchContent)


set(PROJECT_NAME "my_game")

# Download SFML from GitHub
FetchContent_Declare(
    sfml
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG        2.6.1  # You can set the tag to the desired SFML version
)

# Make SFML available in your project
FetchContent_MakeAvailable(sfml)

# Define the executable
add_executable(${PROJECT_NAME} src/main.cpp)

# Link SFML libraries
target_link_libraries(${PROJECT_NAME} PRIVATE sfml-system sfml-window sfml-graphics)

# Include directories for SFML
target_include_directories(${PROJECT_NAME} PRIVATE ${sfml_SOURCE_DIR}/include)
