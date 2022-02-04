set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "-O3 -Wall -Wextra")

# Project
add_executable(epidemic 
	Person.cpp
	Simulation.cpp
	main.cpp)

#target_link_libraries(epidemic PUBLIC matplot)
