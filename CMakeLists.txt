cmake_minimum_required(VERSION 3.5)
project(Graph)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp STLTree.cpp ExpressionTree.cpp MinimalSpanningTree.cpp Dijkstra.cpp SparseTree.cpp Bellman_Ford.cpp Floyd.cpp ArugumentingPath.cpp)
add_executable(Graph ${SOURCE_FILES})