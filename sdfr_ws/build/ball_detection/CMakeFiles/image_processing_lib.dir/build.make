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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lucasjko/sdfr_ws/src/ball_detection

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lucasjko/sdfr_ws/build/ball_detection

# Include any dependencies generated for this target.
include CMakeFiles/image_processing_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/image_processing_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/image_processing_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/image_processing_lib.dir/flags.make

CMakeFiles/image_processing_lib.dir/src/image_processing.cpp.o: CMakeFiles/image_processing_lib.dir/flags.make
CMakeFiles/image_processing_lib.dir/src/image_processing.cpp.o: /home/lucasjko/sdfr_ws/src/ball_detection/src/image_processing.cpp
CMakeFiles/image_processing_lib.dir/src/image_processing.cpp.o: CMakeFiles/image_processing_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucasjko/sdfr_ws/build/ball_detection/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/image_processing_lib.dir/src/image_processing.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/image_processing_lib.dir/src/image_processing.cpp.o -MF CMakeFiles/image_processing_lib.dir/src/image_processing.cpp.o.d -o CMakeFiles/image_processing_lib.dir/src/image_processing.cpp.o -c /home/lucasjko/sdfr_ws/src/ball_detection/src/image_processing.cpp

CMakeFiles/image_processing_lib.dir/src/image_processing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/image_processing_lib.dir/src/image_processing.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucasjko/sdfr_ws/src/ball_detection/src/image_processing.cpp > CMakeFiles/image_processing_lib.dir/src/image_processing.cpp.i

CMakeFiles/image_processing_lib.dir/src/image_processing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/image_processing_lib.dir/src/image_processing.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucasjko/sdfr_ws/src/ball_detection/src/image_processing.cpp -o CMakeFiles/image_processing_lib.dir/src/image_processing.cpp.s

# Object files for target image_processing_lib
image_processing_lib_OBJECTS = \
"CMakeFiles/image_processing_lib.dir/src/image_processing.cpp.o"

# External object files for target image_processing_lib
image_processing_lib_EXTERNAL_OBJECTS =

libimage_processing_lib.a: CMakeFiles/image_processing_lib.dir/src/image_processing.cpp.o
libimage_processing_lib.a: CMakeFiles/image_processing_lib.dir/build.make
libimage_processing_lib.a: CMakeFiles/image_processing_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lucasjko/sdfr_ws/build/ball_detection/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libimage_processing_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/image_processing_lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/image_processing_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/image_processing_lib.dir/build: libimage_processing_lib.a
.PHONY : CMakeFiles/image_processing_lib.dir/build

CMakeFiles/image_processing_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/image_processing_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/image_processing_lib.dir/clean

CMakeFiles/image_processing_lib.dir/depend:
	cd /home/lucasjko/sdfr_ws/build/ball_detection && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lucasjko/sdfr_ws/src/ball_detection /home/lucasjko/sdfr_ws/src/ball_detection /home/lucasjko/sdfr_ws/build/ball_detection /home/lucasjko/sdfr_ws/build/ball_detection /home/lucasjko/sdfr_ws/build/ball_detection/CMakeFiles/image_processing_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/image_processing_lib.dir/depend

