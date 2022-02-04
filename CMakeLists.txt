cmake_minimum_required(VERSION 3.15)
project(epidemic
	LANGUAGES CXX
	VERSION 1.0)

add_subdirectory(src)

include(FetchContent)

FetchContent_Declare(
	matplotlib-cpp
	GIT_REPOSITORY https://github.com/lava/matplotlib-cpp
	GIT_TAG origin/master
)
FetchContent_MakeAvailable(matplotlib-cpp)
