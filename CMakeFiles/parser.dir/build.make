# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/yurikelvin/Área de Trabalho/TSPLIB-Parser"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/yurikelvin/Área de Trabalho/TSPLIB-Parser"

# Include any dependencies generated for this target.
include CMakeFiles/parser.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/parser.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/parser.dir/flags.make

CMakeFiles/parser.dir/main.cpp.o: CMakeFiles/parser.dir/flags.make
CMakeFiles/parser.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/yurikelvin/Área de Trabalho/TSPLIB-Parser/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/parser.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/parser.dir/main.cpp.o -c "/home/yurikelvin/Área de Trabalho/TSPLIB-Parser/main.cpp"

CMakeFiles/parser.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/parser.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/yurikelvin/Área de Trabalho/TSPLIB-Parser/main.cpp" > CMakeFiles/parser.dir/main.cpp.i

CMakeFiles/parser.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/parser.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/yurikelvin/Área de Trabalho/TSPLIB-Parser/main.cpp" -o CMakeFiles/parser.dir/main.cpp.s

CMakeFiles/parser.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/parser.dir/main.cpp.o.requires

CMakeFiles/parser.dir/main.cpp.o.provides: CMakeFiles/parser.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/parser.dir/build.make CMakeFiles/parser.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/parser.dir/main.cpp.o.provides

CMakeFiles/parser.dir/main.cpp.o.provides.build: CMakeFiles/parser.dir/main.cpp.o


CMakeFiles/parser.dir/commons/TSPLibParser.cpp.o: CMakeFiles/parser.dir/flags.make
CMakeFiles/parser.dir/commons/TSPLibParser.cpp.o: commons/TSPLibParser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/yurikelvin/Área de Trabalho/TSPLIB-Parser/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/parser.dir/commons/TSPLibParser.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/parser.dir/commons/TSPLibParser.cpp.o -c "/home/yurikelvin/Área de Trabalho/TSPLIB-Parser/commons/TSPLibParser.cpp"

CMakeFiles/parser.dir/commons/TSPLibParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/parser.dir/commons/TSPLibParser.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/yurikelvin/Área de Trabalho/TSPLIB-Parser/commons/TSPLibParser.cpp" > CMakeFiles/parser.dir/commons/TSPLibParser.cpp.i

CMakeFiles/parser.dir/commons/TSPLibParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/parser.dir/commons/TSPLibParser.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/yurikelvin/Área de Trabalho/TSPLIB-Parser/commons/TSPLibParser.cpp" -o CMakeFiles/parser.dir/commons/TSPLibParser.cpp.s

CMakeFiles/parser.dir/commons/TSPLibParser.cpp.o.requires:

.PHONY : CMakeFiles/parser.dir/commons/TSPLibParser.cpp.o.requires

CMakeFiles/parser.dir/commons/TSPLibParser.cpp.o.provides: CMakeFiles/parser.dir/commons/TSPLibParser.cpp.o.requires
	$(MAKE) -f CMakeFiles/parser.dir/build.make CMakeFiles/parser.dir/commons/TSPLibParser.cpp.o.provides.build
.PHONY : CMakeFiles/parser.dir/commons/TSPLibParser.cpp.o.provides

CMakeFiles/parser.dir/commons/TSPLibParser.cpp.o.provides.build: CMakeFiles/parser.dir/commons/TSPLibParser.cpp.o


# Object files for target parser
parser_OBJECTS = \
"CMakeFiles/parser.dir/main.cpp.o" \
"CMakeFiles/parser.dir/commons/TSPLibParser.cpp.o"

# External object files for target parser
parser_EXTERNAL_OBJECTS =

parser: CMakeFiles/parser.dir/main.cpp.o
parser: CMakeFiles/parser.dir/commons/TSPLibParser.cpp.o
parser: CMakeFiles/parser.dir/build.make
parser: CMakeFiles/parser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/yurikelvin/Área de Trabalho/TSPLIB-Parser/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable parser"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/parser.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/parser.dir/build: parser

.PHONY : CMakeFiles/parser.dir/build

CMakeFiles/parser.dir/requires: CMakeFiles/parser.dir/main.cpp.o.requires
CMakeFiles/parser.dir/requires: CMakeFiles/parser.dir/commons/TSPLibParser.cpp.o.requires

.PHONY : CMakeFiles/parser.dir/requires

CMakeFiles/parser.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/parser.dir/cmake_clean.cmake
.PHONY : CMakeFiles/parser.dir/clean

CMakeFiles/parser.dir/depend:
	cd "/home/yurikelvin/Área de Trabalho/TSPLIB-Parser" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/yurikelvin/Área de Trabalho/TSPLIB-Parser" "/home/yurikelvin/Área de Trabalho/TSPLIB-Parser" "/home/yurikelvin/Área de Trabalho/TSPLIB-Parser" "/home/yurikelvin/Área de Trabalho/TSPLIB-Parser" "/home/yurikelvin/Área de Trabalho/TSPLIB-Parser/CMakeFiles/parser.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/parser.dir/depend

