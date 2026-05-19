#pragma once
#include <vector>

class TwoDGrid {
public:
    TwoDGrid(int rows, int cols);
    void printGrid() const;
private:
    std::vector<std::vector<char>> grid2d;

protected:
};