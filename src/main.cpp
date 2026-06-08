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
    
    Robot roBuddy(2,2);
    grid.addObstacle(roBuddy.getPosition(), 'R');
    //robuddy.printCurrPos();
    grid.printGrid();
    roBuddy.move(RIGHT,grid);
    grid.printGrid();
    //roBuddy.printCurrPos();
    roBuddy.move(UP,grid);
    grid.printGrid();
    //roBuddy.printCurrPos();
    roBuddy.move(LEFT,grid);
    grid.printGrid();
    //roBuddy.printCurrPos();
    roBuddy.move(DOWN,grid);
    grid.printGrid();



    return 0;
}
