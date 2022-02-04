set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "-O3 -Wall -Wextra")

# Project
add_executable(epidemic 
	Person.cpp
	Simulation.cpp
	#Plotting.cpp
	main.cpp)


target_link_libraries(epidemic PRIVATE matplotlib_cpp)
set_target_properties(epidemic PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")