# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\Software\JetBrains\CLion\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = D:\Software\JetBrains\CLion\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\CODE\CLionProjects\test-20-12-13

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CODE\CLionProjects\test-20-12-13\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/test_20_12_13.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_20_12_13.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_20_12_13.dir/flags.make

CMakeFiles/test_20_12_13.dir/main.cpp.obj: CMakeFiles/test_20_12_13.dir/flags.make
CMakeFiles/test_20_12_13.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CODE\CLionProjects\test-20-12-13\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_20_12_13.dir/main.cpp.obj"
	C:\PROGRA~2\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\test_20_12_13.dir\main.cpp.obj -c D:\CODE\CLionProjects\test-20-12-13\main.cpp

CMakeFiles/test_20_12_13.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_20_12_13.dir/main.cpp.i"
	C:\PROGRA~2\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CODE\CLionProjects\test-20-12-13\main.cpp > CMakeFiles\test_20_12_13.dir\main.cpp.i

CMakeFiles/test_20_12_13.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_20_12_13.dir/main.cpp.s"
	C:\PROGRA~2\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CODE\CLionProjects\test-20-12-13\main.cpp -o CMakeFiles\test_20_12_13.dir\main.cpp.s

# Object files for target test_20_12_13
test_20_12_13_OBJECTS = \
"CMakeFiles/test_20_12_13.dir/main.cpp.obj"

# External object files for target test_20_12_13
test_20_12_13_EXTERNAL_OBJECTS =

test_20_12_13.exe: CMakeFiles/test_20_12_13.dir/main.cpp.obj
test_20_12_13.exe: CMakeFiles/test_20_12_13.dir/build.make
test_20_12_13.exe: CMakeFiles/test_20_12_13.dir/linklibs.rsp
test_20_12_13.exe: CMakeFiles/test_20_12_13.dir/objects1.rsp
test_20_12_13.exe: CMakeFiles/test_20_12_13.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CODE\CLionProjects\test-20-12-13\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_20_12_13.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\test_20_12_13.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_20_12_13.dir/build: test_20_12_13.exe

.PHONY : CMakeFiles/test_20_12_13.dir/build

CMakeFiles/test_20_12_13.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\test_20_12_13.dir\cmake_clean.cmake
.PHONY : CMakeFiles/test_20_12_13.dir/clean

CMakeFiles/test_20_12_13.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CODE\CLionProjects\test-20-12-13 D:\CODE\CLionProjects\test-20-12-13 D:\CODE\CLionProjects\test-20-12-13\cmake-build-debug D:\CODE\CLionProjects\test-20-12-13\cmake-build-debug D:\CODE\CLionProjects\test-20-12-13\cmake-build-debug\CMakeFiles\test_20_12_13.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_20_12_13.dir/depend

