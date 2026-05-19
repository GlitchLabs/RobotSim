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