# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.25.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.25.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/anthonandersson/edafdir/labs-edaf50/lab1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/anthonandersson/edafdir/labs-edaf50/lab1/buildex

# Include any dependencies generated for this target.
include CMakeFiles/Exencode.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Exencode.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Exencode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Exencode.dir/flags.make

CMakeFiles/Exencode.dir/encode.cc.o: CMakeFiles/Exencode.dir/flags.make
CMakeFiles/Exencode.dir/encode.cc.o: /Users/anthonandersson/edafdir/labs-edaf50/lab1/encode.cc
CMakeFiles/Exencode.dir/encode.cc.o: CMakeFiles/Exencode.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anthonandersson/edafdir/labs-edaf50/lab1/buildex/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Exencode.dir/encode.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Exencode.dir/encode.cc.o -MF CMakeFiles/Exencode.dir/encode.cc.o.d -o CMakeFiles/Exencode.dir/encode.cc.o -c /Users/anthonandersson/edafdir/labs-edaf50/lab1/encode.cc

CMakeFiles/Exencode.dir/encode.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exencode.dir/encode.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/anthonandersson/edafdir/labs-edaf50/lab1/encode.cc > CMakeFiles/Exencode.dir/encode.cc.i

CMakeFiles/Exencode.dir/encode.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exencode.dir/encode.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/anthonandersson/edafdir/labs-edaf50/lab1/encode.cc -o CMakeFiles/Exencode.dir/encode.cc.s

# Object files for target Exencode
Exencode_OBJECTS = \
"CMakeFiles/Exencode.dir/encode.cc.o"

# External object files for target Exencode
Exencode_EXTERNAL_OBJECTS =

Exencode: CMakeFiles/Exencode.dir/encode.cc.o
Exencode: CMakeFiles/Exencode.dir/build.make
Exencode: liblab1.a
Exencode: CMakeFiles/Exencode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/anthonandersson/edafdir/labs-edaf50/lab1/buildex/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Exencode"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Exencode.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Exencode.dir/build: Exencode
.PHONY : CMakeFiles/Exencode.dir/build

CMakeFiles/Exencode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Exencode.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Exencode.dir/clean

CMakeFiles/Exencode.dir/depend:
	cd /Users/anthonandersson/edafdir/labs-edaf50/lab1/buildex && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/anthonandersson/edafdir/labs-edaf50/lab1 /Users/anthonandersson/edafdir/labs-edaf50/lab1 /Users/anthonandersson/edafdir/labs-edaf50/lab1/buildex /Users/anthonandersson/edafdir/labs-edaf50/lab1/buildex /Users/anthonandersson/edafdir/labs-edaf50/lab1/buildex/CMakeFiles/Exencode.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Exencode.dir/depend

