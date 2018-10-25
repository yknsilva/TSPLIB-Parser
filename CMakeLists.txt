cmake_minimum_required(VERSION 3.5)
project(TSPLibParser)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3")

set(SOURCE_FILES main.cpp ./commons/Matrix.h ./commons/IndexOutOfBoundsException.h ./commons/NegativeDimensionException.h ./commons/TSPLibParser.cpp ./commons/TSPLibParser.h)
add_executable(parser ${SOURCE_FILES})