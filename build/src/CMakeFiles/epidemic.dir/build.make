# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.22.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.22.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/william/dev/projects/Epidemic

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/william/dev/projects/Epidemic/build

# Include any dependencies generated for this target.
include src/CMakeFiles/epidemic.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/epidemic.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/epidemic.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/epidemic.dir/flags.make

src/CMakeFiles/epidemic.dir/Person.cpp.o: src/CMakeFiles/epidemic.dir/flags.make
src/CMakeFiles/epidemic.dir/Person.cpp.o: ../src/Person.cpp
src/CMakeFiles/epidemic.dir/Person.cpp.o: src/CMakeFiles/epidemic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/william/dev/projects/Epidemic/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/epidemic.dir/Person.cpp.o"
	cd /Users/william/dev/projects/Epidemic/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/epidemic.dir/Person.cpp.o -MF CMakeFiles/epidemic.dir/Person.cpp.o.d -o CMakeFiles/epidemic.dir/Person.cpp.o -c /Users/william/dev/projects/Epidemic/src/Person.cpp

src/CMakeFiles/epidemic.dir/Person.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/epidemic.dir/Person.cpp.i"
	cd /Users/william/dev/projects/Epidemic/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/william/dev/projects/Epidemic/src/Person.cpp > CMakeFiles/epidemic.dir/Person.cpp.i

src/CMakeFiles/epidemic.dir/Person.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/epidemic.dir/Person.cpp.s"
	cd /Users/william/dev/projects/Epidemic/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/william/dev/projects/Epidemic/src/Person.cpp -o CMakeFiles/epidemic.dir/Person.cpp.s

src/CMakeFiles/epidemic.dir/Simulation.cpp.o: src/CMakeFiles/epidemic.dir/flags.make
src/CMakeFiles/epidemic.dir/Simulation.cpp.o: ../src/Simulation.cpp
src/CMakeFiles/epidemic.dir/Simulation.cpp.o: src/CMakeFiles/epidemic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/william/dev/projects/Epidemic/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/epidemic.dir/Simulation.cpp.o"
	cd /Users/william/dev/projects/Epidemic/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/epidemic.dir/Simulation.cpp.o -MF CMakeFiles/epidemic.dir/Simulation.cpp.o.d -o CMakeFiles/epidemic.dir/Simulation.cpp.o -c /Users/william/dev/projects/Epidemic/src/Simulation.cpp

src/CMakeFiles/epidemic.dir/Simulation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/epidemic.dir/Simulation.cpp.i"
	cd /Users/william/dev/projects/Epidemic/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/william/dev/projects/Epidemic/src/Simulation.cpp > CMakeFiles/epidemic.dir/Simulation.cpp.i

src/CMakeFiles/epidemic.dir/Simulation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/epidemic.dir/Simulation.cpp.s"
	cd /Users/william/dev/projects/Epidemic/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/william/dev/projects/Epidemic/src/Simulation.cpp -o CMakeFiles/epidemic.dir/Simulation.cpp.s

src/CMakeFiles/epidemic.dir/main.cpp.o: src/CMakeFiles/epidemic.dir/flags.make
src/CMakeFiles/epidemic.dir/main.cpp.o: ../src/main.cpp
src/CMakeFiles/epidemic.dir/main.cpp.o: src/CMakeFiles/epidemic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/william/dev/projects/Epidemic/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/epidemic.dir/main.cpp.o"
	cd /Users/william/dev/projects/Epidemic/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/epidemic.dir/main.cpp.o -MF CMakeFiles/epidemic.dir/main.cpp.o.d -o CMakeFiles/epidemic.dir/main.cpp.o -c /Users/william/dev/projects/Epidemic/src/main.cpp

src/CMakeFiles/epidemic.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/epidemic.dir/main.cpp.i"
	cd /Users/william/dev/projects/Epidemic/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/william/dev/projects/Epidemic/src/main.cpp > CMakeFiles/epidemic.dir/main.cpp.i

src/CMakeFiles/epidemic.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/epidemic.dir/main.cpp.s"
	cd /Users/william/dev/projects/Epidemic/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/william/dev/projects/Epidemic/src/main.cpp -o CMakeFiles/epidemic.dir/main.cpp.s

# Object files for target epidemic
epidemic_OBJECTS = \
"CMakeFiles/epidemic.dir/Person.cpp.o" \
"CMakeFiles/epidemic.dir/Simulation.cpp.o" \
"CMakeFiles/epidemic.dir/main.cpp.o"

# External object files for target epidemic
epidemic_EXTERNAL_OBJECTS =

src/epidemic: src/CMakeFiles/epidemic.dir/Person.cpp.o
src/epidemic: src/CMakeFiles/epidemic.dir/Simulation.cpp.o
src/epidemic: src/CMakeFiles/epidemic.dir/main.cpp.o
src/epidemic: src/CMakeFiles/epidemic.dir/build.make
src/epidemic: _deps/matplotplusplus-build/source/matplot/libmatplot.a
src/epidemic: /usr/local/lib/libjpeg.dylib
src/epidemic: /usr/local/lib/libtiff.dylib
src/epidemic: /Library/Developer/CommandLineTools/SDKs/MacOSX12.1.sdk/usr/lib/libz.tbd
src/epidemic: /usr/local/lib/libpng.dylib
src/epidemic: /Library/Developer/CommandLineTools/SDKs/MacOSX12.1.sdk/usr/lib/libz.tbd
src/epidemic: /usr/local/lib/libpng.dylib
src/epidemic: /usr/local/lib/libmkl_intel.dylib
src/epidemic: /usr/local/lib/libmkl_intel_thread.dylib
src/epidemic: /usr/local/lib/libmkl_core.dylib
src/epidemic: /usr/local/lib/libiomp5.dylib
src/epidemic: /usr/local/lib/libmkl_intel.dylib
src/epidemic: /usr/local/lib/libmkl_intel_thread.dylib
src/epidemic: /usr/local/lib/libmkl_core.dylib
src/epidemic: /usr/local/lib/libiomp5.dylib
src/epidemic: /usr/local/lib/libfftw3.dylib
src/epidemic: /usr/local/lib/libfftw3f.dylib
src/epidemic: /usr/local/lib/libfftw3l.dylib
src/epidemic: /usr/local/lib/libfftw3_threads.dylib
src/epidemic: /usr/local/lib/libfftw3f_threads.dylib
src/epidemic: /usr/local/lib/libfftw3l_threads.dylib
src/epidemic: /usr/local/lib/libfftw3_omp.dylib
src/epidemic: /usr/local/lib/libfftw3f_omp.dylib
src/epidemic: /usr/local/lib/libfftw3l_omp.dylib
src/epidemic: _deps/matplotplusplus-build/source/3rd_party/libnodesoup.a
src/epidemic: src/CMakeFiles/epidemic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/william/dev/projects/Epidemic/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable epidemic"
	cd /Users/william/dev/projects/Epidemic/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/epidemic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/epidemic.dir/build: src/epidemic
.PHONY : src/CMakeFiles/epidemic.dir/build

src/CMakeFiles/epidemic.dir/clean:
	cd /Users/william/dev/projects/Epidemic/build/src && $(CMAKE_COMMAND) -P CMakeFiles/epidemic.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/epidemic.dir/clean

src/CMakeFiles/epidemic.dir/depend:
	cd /Users/william/dev/projects/Epidemic/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/william/dev/projects/Epidemic /Users/william/dev/projects/Epidemic/src /Users/william/dev/projects/Epidemic/build /Users/william/dev/projects/Epidemic/build/src /Users/william/dev/projects/Epidemic/build/src/CMakeFiles/epidemic.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/epidemic.dir/depend

