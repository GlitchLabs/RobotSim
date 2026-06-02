cmake_minimum_required(VERSION 3.15...4.1)

project(RobotSim VERSION 1.0
                  DESCRIPTION "2D Grid where a robot can navigate by input or automatically dodging obsticals and picking up rewards"
                  LANGUAGES CXX)

#Creates a CMake build target named RobotSim from the listed source files,
#then compiles and links them into the final executable also named RobotSim.

add_executable(RobotSim src/main.cpp src/TwoDGrid.cpp src/Robot.cpp)
#This command is about header search paths not compiling headers
target_include_directories(RobotSim PRIVATE include)
