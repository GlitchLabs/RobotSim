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

void Robot::move(direction movement, TwoDGrid& grid){
    switch(movement){
        case UP:
            if(grid.isValidMove(this->pos, UP)){
                grid.addObstacle(this->pos,'.');
                this->pos.row--;
                grid.addObstacle(pos,'R');
                break;
            }
            std::cout<< "up out of bounds" <<std::endl;
            break;
        case DOWN:
            if(grid.isValidMove(this->pos, DOWN)){
                grid.addObstacle(this->pos,'.');
                this->pos.row++;
                grid.addObstacle(pos,'R');
                break;
            }
            std::cout<< "up out of bounds" <<std::endl;
            break;
        case LEFT:
            if(grid.isValidMove(this->pos, LEFT)){
                grid.addObstacle(this->pos,'.');
                this->pos.col--;
                grid.addObstacle(pos,'R');
                break;
            }
            std::cout<< "up out of bounds" <<std::endl;
            break;
        case RIGHT:
            if(grid.isValidMove(this->pos, RIGHT)){
                grid.addObstacle(this->pos,'.');
                this->pos.col++;
                grid.addObstacle(pos,'R');
                break;
            }
            std::cout<< "up out of bounds" <<std::endl;
            break;
        default:
            break;
    }
}