cmake_minimum_required(VERSION 3.15...4.1)

project(RobotSim VERSION 1.0
                  DESCRIPTION "2D Grid where a robot can navigate by input or automatically dodging obsticals and picking up rewards"
                  LANGUAGES CXX)

add_executable(RobotSim src/main.cpp)
