# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /home/smith/.local/lib/python3.10/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/smith/.local/lib/python3.10/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/smith/leetcode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/smith/leetcode/build

# Include any dependencies generated for this target.
include CMakeFiles/prefix.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/prefix.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/prefix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/prefix.dir/flags.make

CMakeFiles/prefix.dir/src/prefix.cpp.o: CMakeFiles/prefix.dir/flags.make
CMakeFiles/prefix.dir/src/prefix.cpp.o: /home/smith/leetcode/src/prefix.cpp
CMakeFiles/prefix.dir/src/prefix.cpp.o: CMakeFiles/prefix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/smith/leetcode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/prefix.dir/src/prefix.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/prefix.dir/src/prefix.cpp.o -MF CMakeFiles/prefix.dir/src/prefix.cpp.o.d -o CMakeFiles/prefix.dir/src/prefix.cpp.o -c /home/smith/leetcode/src/prefix.cpp

CMakeFiles/prefix.dir/src/prefix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prefix.dir/src/prefix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/smith/leetcode/src/prefix.cpp > CMakeFiles/prefix.dir/src/prefix.cpp.i

CMakeFiles/prefix.dir/src/prefix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prefix.dir/src/prefix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/smith/leetcode/src/prefix.cpp -o CMakeFiles/prefix.dir/src/prefix.cpp.s

# Object files for target prefix
prefix_OBJECTS = \
"CMakeFiles/prefix.dir/src/prefix.cpp.o"

# External object files for target prefix
prefix_EXTERNAL_OBJECTS =

prefix: CMakeFiles/prefix.dir/src/prefix.cpp.o
prefix: CMakeFiles/prefix.dir/build.make
prefix: CMakeFiles/prefix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/smith/leetcode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable prefix"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/prefix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/prefix.dir/build: prefix
.PHONY : CMakeFiles/prefix.dir/build

CMakeFiles/prefix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/prefix.dir/cmake_clean.cmake
.PHONY : CMakeFiles/prefix.dir/clean

CMakeFiles/prefix.dir/depend:
	cd /home/smith/leetcode/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/smith/leetcode /home/smith/leetcode /home/smith/leetcode/build /home/smith/leetcode/build /home/smith/leetcode/build/CMakeFiles/prefix.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/prefix.dir/depend

