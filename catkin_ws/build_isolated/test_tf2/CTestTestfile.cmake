# CMake generated Testfile for 
# Source directory: /home/khoa/catkin_ws/src/geometry2/test_tf2
# Build directory: /home/khoa/catkin_ws/build_isolated/test_tf2
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_test_tf2_gtest_buffer_core_test "/home/khoa/catkin_ws/build_isolated/test_tf2/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/khoa/catkin_ws/build_isolated/test_tf2/test_results/test_tf2/gtest-buffer_core_test.xml" "--return-code" "/home/khoa/catkin_ws/devel_isolated/test_tf2/lib/test_tf2/buffer_core_test --gtest_output=xml:/home/khoa/catkin_ws/build_isolated/test_tf2/test_results/test_tf2/gtest-buffer_core_test.xml")
add_test(_ctest_test_tf2_gtest_test_tf2_message_filter "/home/khoa/catkin_ws/build_isolated/test_tf2/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/khoa/catkin_ws/build_isolated/test_tf2/test_results/test_tf2/gtest-test_tf2_message_filter.xml" "--return-code" "/home/khoa/catkin_ws/devel_isolated/test_tf2/lib/test_tf2/test_tf2_message_filter --gtest_output=xml:/home/khoa/catkin_ws/build_isolated/test_tf2/test_results/test_tf2/gtest-test_tf2_message_filter.xml")
add_test(_ctest_test_tf2_gtest_test_convert "/home/khoa/catkin_ws/build_isolated/test_tf2/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/khoa/catkin_ws/build_isolated/test_tf2/test_results/test_tf2/gtest-test_convert.xml" "--return-code" "/home/khoa/catkin_ws/devel_isolated/test_tf2/lib/test_tf2/test_convert --gtest_output=xml:/home/khoa/catkin_ws/build_isolated/test_tf2/test_results/test_tf2/gtest-test_convert.xml")
add_test(_ctest_test_tf2_gtest_test_utils "/home/khoa/catkin_ws/build_isolated/test_tf2/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/khoa/catkin_ws/build_isolated/test_tf2/test_results/test_tf2/gtest-test_utils.xml" "--return-code" "/home/khoa/catkin_ws/devel_isolated/test_tf2/lib/test_tf2/test_utils --gtest_output=xml:/home/khoa/catkin_ws/build_isolated/test_tf2/test_results/test_tf2/gtest-test_utils.xml")
add_test(_ctest_test_tf2_rostest_test_buffer_client_tester.launch "/home/khoa/catkin_ws/build_isolated/test_tf2/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/khoa/catkin_ws/build_isolated/test_tf2/test_results/test_tf2/rostest-test_buffer_client_tester.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/khoa/catkin_ws/src/geometry2/test_tf2 --package=test_tf2 --results-filename test_buffer_client_tester.xml --results-base-dir \"/home/khoa/catkin_ws/build_isolated/test_tf2/test_results\" /home/khoa/catkin_ws/src/geometry2/test_tf2/test/buffer_client_tester.launch ")
add_test(_ctest_test_tf2_rostest_test_static_publisher.launch "/home/khoa/catkin_ws/build_isolated/test_tf2/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/khoa/catkin_ws/build_isolated/test_tf2/test_results/test_tf2/rostest-test_static_publisher.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/khoa/catkin_ws/src/geometry2/test_tf2 --package=test_tf2 --results-filename test_static_publisher.xml --results-base-dir \"/home/khoa/catkin_ws/build_isolated/test_tf2/test_results\" /home/khoa/catkin_ws/src/geometry2/test_tf2/test/static_publisher.launch ")
add_test(_ctest_test_tf2_rostest_test_test_tf2_bullet.launch "/home/khoa/catkin_ws/build_isolated/test_tf2/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/khoa/catkin_ws/build_isolated/test_tf2/test_results/test_tf2/rostest-test_test_tf2_bullet.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/khoa/catkin_ws/src/geometry2/test_tf2 --package=test_tf2 --results-filename test_test_tf2_bullet.xml --results-base-dir \"/home/khoa/catkin_ws/build_isolated/test_tf2/test_results\" /home/khoa/catkin_ws/src/geometry2/test_tf2/test/test_tf2_bullet.launch ")
subdirs("gtest")
