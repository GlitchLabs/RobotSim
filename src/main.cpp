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
    Position pos{2,2};
    grid.addObstacle( pos,'S');
    
    Robot robuddy(4,4);
    grid.addObstacle(robuddy.getPosition(), 'R');
    robuddy.printCurrPos();
    grid.printGrid();

    return 0;
}
