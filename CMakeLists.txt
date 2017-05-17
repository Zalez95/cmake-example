cmake_minimum_required(VERSION 2.6)
 
# Numero de version
set(Test_VERSION_MAJOR 0)
set(Test_VERSION_MINOR 1)

# Directorios de salida
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/lib)

# Banderas del compilador
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

project(TestProject)
subdirs(test maths)

