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
CMAKE_SOURCE_DIR = D:\CODE\CLionProjects\HomeWork1-21-1-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CODE\CLionProjects\HomeWork1-21-1-2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HomeWork1_21_1_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HomeWork1_21_1_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HomeWork1_21_1_2.dir/flags.make

CMakeFiles/HomeWork1_21_1_2.dir/main.cpp.obj: CMakeFiles/HomeWork1_21_1_2.dir/flags.make
CMakeFiles/HomeWork1_21_1_2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CODE\CLionProjects\HomeWork1-21-1-2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HomeWork1_21_1_2.dir/main.cpp.obj"
	C:\PROGRA~2\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\HomeWork1_21_1_2.dir\main.cpp.obj -c D:\CODE\CLionProjects\HomeWork1-21-1-2\main.cpp

CMakeFiles/HomeWork1_21_1_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HomeWork1_21_1_2.dir/main.cpp.i"
	C:\PROGRA~2\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CODE\CLionProjects\HomeWork1-21-1-2\main.cpp > CMakeFiles\HomeWork1_21_1_2.dir\main.cpp.i

CMakeFiles/HomeWork1_21_1_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HomeWork1_21_1_2.dir/main.cpp.s"
	C:\PROGRA~2\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CODE\CLionProjects\HomeWork1-21-1-2\main.cpp -o CMakeFiles\HomeWork1_21_1_2.dir\main.cpp.s

# Object files for target HomeWork1_21_1_2
HomeWork1_21_1_2_OBJECTS = \
"CMakeFiles/HomeWork1_21_1_2.dir/main.cpp.obj"

# External object files for target HomeWork1_21_1_2
HomeWork1_21_1_2_EXTERNAL_OBJECTS =

HomeWork1_21_1_2.exe: CMakeFiles/HomeWork1_21_1_2.dir/main.cpp.obj
HomeWork1_21_1_2.exe: CMakeFiles/HomeWork1_21_1_2.dir/build.make
HomeWork1_21_1_2.exe: CMakeFiles/HomeWork1_21_1_2.dir/linklibs.rsp
HomeWork1_21_1_2.exe: CMakeFiles/HomeWork1_21_1_2.dir/objects1.rsp
HomeWork1_21_1_2.exe: CMakeFiles/HomeWork1_21_1_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CODE\CLionProjects\HomeWork1-21-1-2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable HomeWork1_21_1_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\HomeWork1_21_1_2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HomeWork1_21_1_2.dir/build: HomeWork1_21_1_2.exe

.PHONY : CMakeFiles/HomeWork1_21_1_2.dir/build

CMakeFiles/HomeWork1_21_1_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\HomeWork1_21_1_2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/HomeWork1_21_1_2.dir/clean

CMakeFiles/HomeWork1_21_1_2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CODE\CLionProjects\HomeWork1-21-1-2 D:\CODE\CLionProjects\HomeWork1-21-1-2 D:\CODE\CLionProjects\HomeWork1-21-1-2\cmake-build-debug D:\CODE\CLionProjects\HomeWork1-21-1-2\cmake-build-debug D:\CODE\CLionProjects\HomeWork1-21-1-2\cmake-build-debug\CMakeFiles\HomeWork1_21_1_2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HomeWork1_21_1_2.dir/depend

