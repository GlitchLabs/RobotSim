#include "Robot.hpp"

Robot::Robot(int row, int col): pos{row,col}{
    std::cout<<"Robot created at position "<< pos.row <<","<<pos.col<<std::endl;
}

void Robot::printCurrPos() const{
    std::cout<<"Robot current position is "<< pos.row<<","<<pos.col<<std::endl;
}

Position Robot::getPosition(){
    return pos;
}