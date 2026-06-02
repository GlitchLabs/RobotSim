//
//  main.cpp
//  RobotSim
//
//  Created by Dakir Thompson on 5/16/26.
//

#include <iostream>
#include "TwoDGrid.hpp"
#include "Robot.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "RobotSim initialized\n";
    TwoDGrid grid(5, 5);
    //grid.printGrid();
    grid.addObstacle(2, 2, 'S');
    grid.printGrid();
    Robot robuddy(4,4);
    robuddy.printCurrPos();

    return 0;
}
