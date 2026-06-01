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
void TwoDGrid::addObstacle(int row, int col, char obst){
    if( row < 0 || col < 0 || row > grid2d.size() || col > grid2d[row].size()){
        std::cout<<"give a row in between" << 0 << " and " << grid2d.size() <<
        " and a col in between " << 0 <<" and " << grid2d[row].size()<<std::endl;
        return;
    }
    grid2d[row][col] = obst; 
    //grid2d.at(row).at(col) = obst;
}

