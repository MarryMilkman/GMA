cmake_minimum_required(VERSION 3.10.2)

project(MyProject)

include_directories (
	inc
)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -static")


set(SRC
		src/main.cpp
		src/get_dest_data.cpp
	)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lpthread")

add_executable(ex1 ${SRC})