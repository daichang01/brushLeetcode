# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/dev/brush/cpp_coding

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/dev/brush/build

# Include any dependencies generated for this target.
include src/CMakeFiles/04LinkListNode.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/04LinkListNode.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/04LinkListNode.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/04LinkListNode.dir/flags.make

src/CMakeFiles/04LinkListNode.dir/04LinkListNode.cpp.o: src/CMakeFiles/04LinkListNode.dir/flags.make
src/CMakeFiles/04LinkListNode.dir/04LinkListNode.cpp.o: /root/dev/brush/cpp_coding/src/04LinkListNode.cpp
src/CMakeFiles/04LinkListNode.dir/04LinkListNode.cpp.o: src/CMakeFiles/04LinkListNode.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/dev/brush/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/04LinkListNode.dir/04LinkListNode.cpp.o"
	cd /root/dev/brush/build/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/04LinkListNode.dir/04LinkListNode.cpp.o -MF CMakeFiles/04LinkListNode.dir/04LinkListNode.cpp.o.d -o CMakeFiles/04LinkListNode.dir/04LinkListNode.cpp.o -c /root/dev/brush/cpp_coding/src/04LinkListNode.cpp

src/CMakeFiles/04LinkListNode.dir/04LinkListNode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/04LinkListNode.dir/04LinkListNode.cpp.i"
	cd /root/dev/brush/build/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/dev/brush/cpp_coding/src/04LinkListNode.cpp > CMakeFiles/04LinkListNode.dir/04LinkListNode.cpp.i

src/CMakeFiles/04LinkListNode.dir/04LinkListNode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/04LinkListNode.dir/04LinkListNode.cpp.s"
	cd /root/dev/brush/build/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/dev/brush/cpp_coding/src/04LinkListNode.cpp -o CMakeFiles/04LinkListNode.dir/04LinkListNode.cpp.s

# Object files for target 04LinkListNode
04LinkListNode_OBJECTS = \
"CMakeFiles/04LinkListNode.dir/04LinkListNode.cpp.o"

# External object files for target 04LinkListNode
04LinkListNode_EXTERNAL_OBJECTS =

src/04LinkListNode: src/CMakeFiles/04LinkListNode.dir/04LinkListNode.cpp.o
src/04LinkListNode: src/CMakeFiles/04LinkListNode.dir/build.make
src/04LinkListNode: src/CMakeFiles/04LinkListNode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/dev/brush/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 04LinkListNode"
	cd /root/dev/brush/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/04LinkListNode.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/04LinkListNode.dir/build: src/04LinkListNode
.PHONY : src/CMakeFiles/04LinkListNode.dir/build

src/CMakeFiles/04LinkListNode.dir/clean:
	cd /root/dev/brush/build/src && $(CMAKE_COMMAND) -P CMakeFiles/04LinkListNode.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/04LinkListNode.dir/clean

src/CMakeFiles/04LinkListNode.dir/depend:
	cd /root/dev/brush/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/dev/brush/cpp_coding /root/dev/brush/cpp_coding/src /root/dev/brush/build /root/dev/brush/build/src /root/dev/brush/build/src/CMakeFiles/04LinkListNode.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/04LinkListNode.dir/depend

