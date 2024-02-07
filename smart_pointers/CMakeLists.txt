cmake_minimum_required(VERSION 3.20)
project(my-project)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(${PROJECT_NAME} main.cpp)


# cmake -DCMAKE_BUILD_TYPE=Debug ./
# cmake -DCMAKE_BUILD_TYPE=RelWithDebInfo ./