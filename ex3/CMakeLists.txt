cmake_minimum_required(VERSION 3.10.2)

project(MyProject)

include_directories (
	inc
)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -static")


set(SRC
		src/main.cpp
		src/Chest.cpp
		src/Case.cpp
		src/TreasureHunter.cpp
	)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lpthread")

add_executable(ex3 ${SRC})