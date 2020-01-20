cmake_minimum_required(VERSION 3.10.2)

project(MyProject)

set(BOOST_ROOT "C:/all_with_prog/plugins/boost_1_70_0")
set(Boost_LIBRARY_DIRS "C:/all_with_prog/plugins/boost_1_70_0/lib")
set(Boost_INCLUDE_DIRS "C:/all_with_prog/plugins/boost_1_70_0")

find_package(Boost 1.65 REQUIRED)

link_directories( ${Boost_LIBRARY_DIRS})

include_directories (
	inc
	${Boost_INCLUDE_DIRS}
)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


set(SRC
		src/main.cpp
		src/Dollar.cpp
	)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lpthread")

add_executable(ex2 ${SRC})