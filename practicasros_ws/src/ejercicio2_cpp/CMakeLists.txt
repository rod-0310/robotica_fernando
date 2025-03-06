cmake_minimum_required(VERSION 3.8)
project(ejercicio2_cpp)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
add_executable(nodo1 src/nodo1.cpp)
ament_target_dependencies(nodo1 rclcpp std_msgs)

add_executable(nodo2 src/nodo2.cpp)
ament_target_dependencies(nodo2 rclcpp std_msgs)

add_executable(nodo3 src/nodo3.cpp)
ament_target_dependencies(nodo3 rclcpp std_msgs)
install(TARGETS
  nodo1
  nodo2
  nodo3
  DESTINATION lib/${PROJECT_NAME}
)
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
