//
//  main.cpp
//  RobotSim
//
//  Created by Dakir Thompson on 5/16/26.
//

#include <iostream>
#include "TwoDGrid.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "RobotSim initialized\n";
    TwoDGrid grid(5, 5);
    //grid.printGrid();
    grid.addObstacle(2, 2, 'S');
    grid.printGrid();
    return 0;
}
