# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/sherlock/Downloads/clion-2018.2.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/sherlock/Downloads/clion-2018.2.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sherlock/CLionProjects/LinearAlgebraCurse

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sherlock/CLionProjects/LinearAlgebraCurse/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LinearAlgebraCurseTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LinearAlgebraCurseTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LinearAlgebraCurseTest.dir/flags.make

CMakeFiles/LinearAlgebraCurseTest.dir/src/main.cpp.o: CMakeFiles/LinearAlgebraCurseTest.dir/flags.make
CMakeFiles/LinearAlgebraCurseTest.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sherlock/CLionProjects/LinearAlgebraCurse/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LinearAlgebraCurseTest.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LinearAlgebraCurseTest.dir/src/main.cpp.o -c /home/sherlock/CLionProjects/LinearAlgebraCurse/src/main.cpp

CMakeFiles/LinearAlgebraCurseTest.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LinearAlgebraCurseTest.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sherlock/CLionProjects/LinearAlgebraCurse/src/main.cpp > CMakeFiles/LinearAlgebraCurseTest.dir/src/main.cpp.i

CMakeFiles/LinearAlgebraCurseTest.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LinearAlgebraCurseTest.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sherlock/CLionProjects/LinearAlgebraCurse/src/main.cpp -o CMakeFiles/LinearAlgebraCurseTest.dir/src/main.cpp.s

CMakeFiles/LinearAlgebraCurseTest.dir/src/tests/vector.cpp.o: CMakeFiles/LinearAlgebraCurseTest.dir/flags.make
CMakeFiles/LinearAlgebraCurseTest.dir/src/tests/vector.cpp.o: ../src/tests/vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sherlock/CLionProjects/LinearAlgebraCurse/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LinearAlgebraCurseTest.dir/src/tests/vector.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LinearAlgebraCurseTest.dir/src/tests/vector.cpp.o -c /home/sherlock/CLionProjects/LinearAlgebraCurse/src/tests/vector.cpp

CMakeFiles/LinearAlgebraCurseTest.dir/src/tests/vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LinearAlgebraCurseTest.dir/src/tests/vector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sherlock/CLionProjects/LinearAlgebraCurse/src/tests/vector.cpp > CMakeFiles/LinearAlgebraCurseTest.dir/src/tests/vector.cpp.i

CMakeFiles/LinearAlgebraCurseTest.dir/src/tests/vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LinearAlgebraCurseTest.dir/src/tests/vector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sherlock/CLionProjects/LinearAlgebraCurse/src/tests/vector.cpp -o CMakeFiles/LinearAlgebraCurseTest.dir/src/tests/vector.cpp.s

CMakeFiles/LinearAlgebraCurseTest.dir/src/vector.cpp.o: CMakeFiles/LinearAlgebraCurseTest.dir/flags.make
CMakeFiles/LinearAlgebraCurseTest.dir/src/vector.cpp.o: ../src/vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sherlock/CLionProjects/LinearAlgebraCurse/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/LinearAlgebraCurseTest.dir/src/vector.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LinearAlgebraCurseTest.dir/src/vector.cpp.o -c /home/sherlock/CLionProjects/LinearAlgebraCurse/src/vector.cpp

CMakeFiles/LinearAlgebraCurseTest.dir/src/vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LinearAlgebraCurseTest.dir/src/vector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sherlock/CLionProjects/LinearAlgebraCurse/src/vector.cpp > CMakeFiles/LinearAlgebraCurseTest.dir/src/vector.cpp.i

CMakeFiles/LinearAlgebraCurseTest.dir/src/vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LinearAlgebraCurseTest.dir/src/vector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sherlock/CLionProjects/LinearAlgebraCurse/src/vector.cpp -o CMakeFiles/LinearAlgebraCurseTest.dir/src/vector.cpp.s

# Object files for target LinearAlgebraCurseTest
LinearAlgebraCurseTest_OBJECTS = \
"CMakeFiles/LinearAlgebraCurseTest.dir/src/main.cpp.o" \
"CMakeFiles/LinearAlgebraCurseTest.dir/src/tests/vector.cpp.o" \
"CMakeFiles/LinearAlgebraCurseTest.dir/src/vector.cpp.o"

# External object files for target LinearAlgebraCurseTest
LinearAlgebraCurseTest_EXTERNAL_OBJECTS =

LinearAlgebraCurseTest: CMakeFiles/LinearAlgebraCurseTest.dir/src/main.cpp.o
LinearAlgebraCurseTest: CMakeFiles/LinearAlgebraCurseTest.dir/src/tests/vector.cpp.o
LinearAlgebraCurseTest: CMakeFiles/LinearAlgebraCurseTest.dir/src/vector.cpp.o
LinearAlgebraCurseTest: CMakeFiles/LinearAlgebraCurseTest.dir/build.make
LinearAlgebraCurseTest: CMakeFiles/LinearAlgebraCurseTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sherlock/CLionProjects/LinearAlgebraCurse/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable LinearAlgebraCurseTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LinearAlgebraCurseTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LinearAlgebraCurseTest.dir/build: LinearAlgebraCurseTest

.PHONY : CMakeFiles/LinearAlgebraCurseTest.dir/build

CMakeFiles/LinearAlgebraCurseTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LinearAlgebraCurseTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LinearAlgebraCurseTest.dir/clean

CMakeFiles/LinearAlgebraCurseTest.dir/depend:
	cd /home/sherlock/CLionProjects/LinearAlgebraCurse/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sherlock/CLionProjects/LinearAlgebraCurse /home/sherlock/CLionProjects/LinearAlgebraCurse /home/sherlock/CLionProjects/LinearAlgebraCurse/cmake-build-debug /home/sherlock/CLionProjects/LinearAlgebraCurse/cmake-build-debug /home/sherlock/CLionProjects/LinearAlgebraCurse/cmake-build-debug/CMakeFiles/LinearAlgebraCurseTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LinearAlgebraCurseTest.dir/depend

