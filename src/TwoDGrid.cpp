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
    }
void TwoDGrid::addObstacle(Position pos, char obst){
    if( pos.row < 0 || pos.col < 0 || pos.row > grid2d.size() || pos.col > grid2d[pos.row].size()){
        std::cout<<"give a row in between" << 0 << " and " << grid2d.size() <<
        " and a col in between " << 0 <<" and " << grid2d[pos.row].size()<<std::endl;
        return;
    }
    grid2d[pos.row][pos.col] = obst; 
    //grid2d.at(row).at(col) = obst;
}

