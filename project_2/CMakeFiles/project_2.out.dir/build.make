# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/roh/Projects/2020/Winter/roviz.io/project_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/roh/Projects/2020/Winter/roviz.io/project_2

# Include any dependencies generated for this target.
include CMakeFiles/project_2.out.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/project_2.out.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project_2.out.dir/flags.make

CMakeFiles/project_2.out.dir/src/main_driver.cpp.o: CMakeFiles/project_2.out.dir/flags.make
CMakeFiles/project_2.out.dir/src/main_driver.cpp.o: src/main_driver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/roh/Projects/2020/Winter/roviz.io/project_2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project_2.out.dir/src/main_driver.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project_2.out.dir/src/main_driver.cpp.o -c /home/roh/Projects/2020/Winter/roviz.io/project_2/src/main_driver.cpp

CMakeFiles/project_2.out.dir/src/main_driver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project_2.out.dir/src/main_driver.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/roh/Projects/2020/Winter/roviz.io/project_2/src/main_driver.cpp > CMakeFiles/project_2.out.dir/src/main_driver.cpp.i

CMakeFiles/project_2.out.dir/src/main_driver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project_2.out.dir/src/main_driver.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/roh/Projects/2020/Winter/roviz.io/project_2/src/main_driver.cpp -o CMakeFiles/project_2.out.dir/src/main_driver.cpp.s

# Object files for target project_2.out
project_2_out_OBJECTS = \
"CMakeFiles/project_2.out.dir/src/main_driver.cpp.o"

# External object files for target project_2.out
project_2_out_EXTERNAL_OBJECTS =

project_2.out: CMakeFiles/project_2.out.dir/src/main_driver.cpp.o
project_2.out: CMakeFiles/project_2.out.dir/build.make
project_2.out: /usr/local/lib/libopencv_dnn.so.4.2.0
project_2.out: /usr/local/lib/libopencv_gapi.so.4.2.0
project_2.out: /usr/local/lib/libopencv_highgui.so.4.2.0
project_2.out: /usr/local/lib/libopencv_ml.so.4.2.0
project_2.out: /usr/local/lib/libopencv_objdetect.so.4.2.0
project_2.out: /usr/local/lib/libopencv_photo.so.4.2.0
project_2.out: /usr/local/lib/libopencv_stitching.so.4.2.0
project_2.out: /usr/local/lib/libopencv_video.so.4.2.0
project_2.out: /usr/local/lib/libopencv_videoio.so.4.2.0
project_2.out: /usr/local/lib/libopencv_imgcodecs.so.4.2.0
project_2.out: /usr/local/lib/libopencv_calib3d.so.4.2.0
project_2.out: /usr/local/lib/libopencv_features2d.so.4.2.0
project_2.out: /usr/local/lib/libopencv_flann.so.4.2.0
project_2.out: /usr/local/lib/libopencv_imgproc.so.4.2.0
project_2.out: /usr/local/lib/libopencv_core.so.4.2.0
project_2.out: CMakeFiles/project_2.out.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/roh/Projects/2020/Winter/roviz.io/project_2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable project_2.out"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/project_2.out.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project_2.out.dir/build: project_2.out

.PHONY : CMakeFiles/project_2.out.dir/build

CMakeFiles/project_2.out.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/project_2.out.dir/cmake_clean.cmake
.PHONY : CMakeFiles/project_2.out.dir/clean

CMakeFiles/project_2.out.dir/depend:
	cd /home/roh/Projects/2020/Winter/roviz.io/project_2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/roh/Projects/2020/Winter/roviz.io/project_2 /home/roh/Projects/2020/Winter/roviz.io/project_2 /home/roh/Projects/2020/Winter/roviz.io/project_2 /home/roh/Projects/2020/Winter/roviz.io/project_2 /home/roh/Projects/2020/Winter/roviz.io/project_2/CMakeFiles/project_2.out.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/project_2.out.dir/depend
