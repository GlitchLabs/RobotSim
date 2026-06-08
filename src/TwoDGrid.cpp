#include <iostream>
#include "TwoDGrid.hpp"

// Constructor to initialize the 2D grid with specified rows and columns
TwoDGrid::TwoDGrid(int rows, int cols) {
    grid2d.resize(rows, std::vector<char>(cols, ' '));
    std::cout << "TwoDGrid initialized with " << rows << " rows and " << cols << " columns.\n";
}

void TwoDGrid::printGrid() const {
        for (const auto& row : grid2d) {
            for (const auto& cell : row) {
                std::cout << cell << '.';
            }
            std::cout << '\n';
        }
        std::cout<<std::endl;
    }
void TwoDGrid::addObstacle(Position pos, char obst){
    if( pos.row < 0 || pos.col < 0 || pos.row > grid2d.size() ||
     pos.col > grid2d[pos.row].size()){
        std::cout<<"give a row in between" << 0 << " and " << grid2d.size() <<
        " and a col in between " << 0 <<" and " << grid2d[pos.row].size()<<
        std::endl;
        return;
    }
    grid2d[pos.row][pos.col] = obst; 
    //grid2d.at(row).at(col) = obst;
}

// void TwoDGrid::updateObstacle(Position pos, direction dir){
//     if( pos.row < 0 || pos.col < 0 || pos.row > grid2d.size() ||
//      pos.col > grid2d[pos.row].size()){
//         switch(dir){
//             case UP:
//                 char temp = grid2d[pos.row][pos.col];
//                 grid2d[pos.row][pos.col] = '.';
//                 pos.row--;
//                 grid2d[pos.row][pos.col] = temp;
//         }
//      }
// }

bool TwoDGrid::isValidMove(Position pos, direction dir){
    switch(dir){
        case UP:
            if(pos.row-- > 0 && pos.row-- < grid2d.size()){
                return true;
            }
            return false;
            break;
        case DOWN:
            if(pos.row++ > 0 && pos.row++ < grid2d.size()){
                return true;
            }
            return false;
            break;
        case LEFT:
            if(pos.col-- > 0 && pos.col-- < grid2d[pos.row].size()){
                return true;
            }
            return false;
            break;
        case RIGHT:
            if(pos.col++ > 0 && pos.col < grid2d[pos.row].size()){
                return true;
            }
            return false;
            break;
        default:
            std::cout<<"no move evaluated"<<std::endl;
            break;
}
}

