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
include filters/CMakeFiles/mean.dir/depend.make

# Include the progress variables for this target.
include filters/CMakeFiles/mean.dir/progress.make

# Include the compile flags for this target's objects.
include filters/CMakeFiles/mean.dir/flags.make

filters/CMakeFiles/mean.dir/src/mean.cpp.o: filters/CMakeFiles/mean.dir/flags.make
filters/CMakeFiles/mean.dir/src/mean.cpp.o: /home/khoa/catkin_ws/src/filters/src/mean.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/khoa/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object filters/CMakeFiles/mean.dir/src/mean.cpp.o"
	cd /home/khoa/catkin_ws/build/filters && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mean.dir/src/mean.cpp.o -c /home/khoa/catkin_ws/src/filters/src/mean.cpp

filters/CMakeFiles/mean.dir/src/mean.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mean.dir/src/mean.cpp.i"
	cd /home/khoa/catkin_ws/build/filters && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/khoa/catkin_ws/src/filters/src/mean.cpp > CMakeFiles/mean.dir/src/mean.cpp.i

filters/CMakeFiles/mean.dir/src/mean.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mean.dir/src/mean.cpp.s"
	cd /home/khoa/catkin_ws/build/filters && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/khoa/catkin_ws/src/filters/src/mean.cpp -o CMakeFiles/mean.dir/src/mean.cpp.s

filters/CMakeFiles/mean.dir/src/mean.cpp.o.requires:

.PHONY : filters/CMakeFiles/mean.dir/src/mean.cpp.o.requires

filters/CMakeFiles/mean.dir/src/mean.cpp.o.provides: filters/CMakeFiles/mean.dir/src/mean.cpp.o.requires
	$(MAKE) -f filters/CMakeFiles/mean.dir/build.make filters/CMakeFiles/mean.dir/src/mean.cpp.o.provides.build
.PHONY : filters/CMakeFiles/mean.dir/src/mean.cpp.o.provides

filters/CMakeFiles/mean.dir/src/mean.cpp.o.provides.build: filters/CMakeFiles/mean.dir/src/mean.cpp.o


# Object files for target mean
mean_OBJECTS = \
"CMakeFiles/mean.dir/src/mean.cpp.o"

# External object files for target mean
mean_EXTERNAL_OBJECTS =

/home/khoa/catkin_ws/devel/lib/libmean.so: filters/CMakeFiles/mean.dir/src/mean.cpp.o
/home/khoa/catkin_ws/devel/lib/libmean.so: filters/CMakeFiles/mean.dir/build.make
/home/khoa/catkin_ws/devel/lib/libmean.so: /opt/ros/melodic/lib/libclass_loader.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/libPocoFoundation.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libdl.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /opt/ros/melodic/lib/libroslib.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /opt/ros/melodic/lib/librospack.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libpython2.7.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /opt/ros/melodic/lib/libroscpp.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /opt/ros/melodic/lib/librosconsole.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /opt/ros/melodic/lib/librostime.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /opt/ros/melodic/lib/libcpp_common.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /opt/ros/melodic/lib/librosconsole.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /opt/ros/melodic/lib/librostime.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /opt/ros/melodic/lib/libcpp_common.so
/home/khoa/catkin_ws/devel/lib/libmean.so: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/khoa/catkin_ws/devel/lib/libmean.so: filters/CMakeFiles/mean.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/khoa/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library /home/khoa/catkin_ws/devel/lib/libmean.so"
	cd /home/khoa/catkin_ws/build/filters && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mean.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
filters/CMakeFiles/mean.dir/build: /home/khoa/catkin_ws/devel/lib/libmean.so

.PHONY : filters/CMakeFiles/mean.dir/build

filters/CMakeFiles/mean.dir/requires: filters/CMakeFiles/mean.dir/src/mean.cpp.o.requires

.PHONY : filters/CMakeFiles/mean.dir/requires

filters/CMakeFiles/mean.dir/clean:
	cd /home/khoa/catkin_ws/build/filters && $(CMAKE_COMMAND) -P CMakeFiles/mean.dir/cmake_clean.cmake
.PHONY : filters/CMakeFiles/mean.dir/clean

filters/CMakeFiles/mean.dir/depend:
	cd /home/khoa/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/khoa/catkin_ws/src /home/khoa/catkin_ws/src/filters /home/khoa/catkin_ws/build /home/khoa/catkin_ws/build/filters /home/khoa/catkin_ws/build/filters/CMakeFiles/mean.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : filters/CMakeFiles/mean.dir/depend

