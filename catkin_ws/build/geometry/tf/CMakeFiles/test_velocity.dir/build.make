# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/khoa/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/khoa/catkin_ws/build

# Include any dependencies generated for this target.
include geometry/tf/CMakeFiles/test_velocity.dir/depend.make

# Include the progress variables for this target.
include geometry/tf/CMakeFiles/test_velocity.dir/progress.make

# Include the compile flags for this target's objects.
include geometry/tf/CMakeFiles/test_velocity.dir/flags.make

geometry/tf/CMakeFiles/test_velocity.dir/test/velocity_test.cpp.o: geometry/tf/CMakeFiles/test_velocity.dir/flags.make
geometry/tf/CMakeFiles/test_velocity.dir/test/velocity_test.cpp.o: /home/khoa/catkin_ws/src/geometry/tf/test/velocity_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/khoa/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object geometry/tf/CMakeFiles/test_velocity.dir/test/velocity_test.cpp.o"
	cd /home/khoa/catkin_ws/build/geometry/tf && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_velocity.dir/test/velocity_test.cpp.o -c /home/khoa/catkin_ws/src/geometry/tf/test/velocity_test.cpp

geometry/tf/CMakeFiles/test_velocity.dir/test/velocity_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_velocity.dir/test/velocity_test.cpp.i"
	cd /home/khoa/catkin_ws/build/geometry/tf && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/khoa/catkin_ws/src/geometry/tf/test/velocity_test.cpp > CMakeFiles/test_velocity.dir/test/velocity_test.cpp.i

geometry/tf/CMakeFiles/test_velocity.dir/test/velocity_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_velocity.dir/test/velocity_test.cpp.s"
	cd /home/khoa/catkin_ws/build/geometry/tf && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/khoa/catkin_ws/src/geometry/tf/test/velocity_test.cpp -o CMakeFiles/test_velocity.dir/test/velocity_test.cpp.s

geometry/tf/CMakeFiles/test_velocity.dir/test/velocity_test.cpp.o.requires:

.PHONY : geometry/tf/CMakeFiles/test_velocity.dir/test/velocity_test.cpp.o.requires

geometry/tf/CMakeFiles/test_velocity.dir/test/velocity_test.cpp.o.provides: geometry/tf/CMakeFiles/test_velocity.dir/test/velocity_test.cpp.o.requires
	$(MAKE) -f geometry/tf/CMakeFiles/test_velocity.dir/build.make geometry/tf/CMakeFiles/test_velocity.dir/test/velocity_test.cpp.o.provides.build
.PHONY : geometry/tf/CMakeFiles/test_velocity.dir/test/velocity_test.cpp.o.provides

geometry/tf/CMakeFiles/test_velocity.dir/test/velocity_test.cpp.o.provides.build: geometry/tf/CMakeFiles/test_velocity.dir/test/velocity_test.cpp.o


# Object files for target test_velocity
test_velocity_OBJECTS = \
"CMakeFiles/test_velocity.dir/test/velocity_test.cpp.o"

# External object files for target test_velocity
test_velocity_EXTERNAL_OBJECTS =

/home/khoa/catkin_ws/devel/lib/tf/test_velocity: geometry/tf/CMakeFiles/test_velocity.dir/test/velocity_test.cpp.o
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: geometry/tf/CMakeFiles/test_velocity.dir/build.make
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: gtest/googlemock/gtest/libgtest.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /home/khoa/catkin_ws/devel/lib/libtf.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /home/khoa/catkin_ws/devel/lib/libtf2_ros.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /opt/ros/melodic/lib/libactionlib.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /opt/ros/melodic/lib/libmessage_filters.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /opt/ros/melodic/lib/libroscpp.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /opt/ros/melodic/lib/librosconsole.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /home/khoa/catkin_ws/devel/lib/libtf2.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /opt/ros/melodic/lib/librostime.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /opt/ros/melodic/lib/libcpp_common.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/khoa/catkin_ws/devel/lib/tf/test_velocity: geometry/tf/CMakeFiles/test_velocity.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/khoa/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/khoa/catkin_ws/devel/lib/tf/test_velocity"
	cd /home/khoa/catkin_ws/build/geometry/tf && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_velocity.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
geometry/tf/CMakeFiles/test_velocity.dir/build: /home/khoa/catkin_ws/devel/lib/tf/test_velocity

.PHONY : geometry/tf/CMakeFiles/test_velocity.dir/build

geometry/tf/CMakeFiles/test_velocity.dir/requires: geometry/tf/CMakeFiles/test_velocity.dir/test/velocity_test.cpp.o.requires

.PHONY : geometry/tf/CMakeFiles/test_velocity.dir/requires

geometry/tf/CMakeFiles/test_velocity.dir/clean:
	cd /home/khoa/catkin_ws/build/geometry/tf && $(CMAKE_COMMAND) -P CMakeFiles/test_velocity.dir/cmake_clean.cmake
.PHONY : geometry/tf/CMakeFiles/test_velocity.dir/clean

geometry/tf/CMakeFiles/test_velocity.dir/depend:
	cd /home/khoa/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/khoa/catkin_ws/src /home/khoa/catkin_ws/src/geometry/tf /home/khoa/catkin_ws/build /home/khoa/catkin_ws/build/geometry/tf /home/khoa/catkin_ws/build/geometry/tf/CMakeFiles/test_velocity.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : geometry/tf/CMakeFiles/test_velocity.dir/depend

