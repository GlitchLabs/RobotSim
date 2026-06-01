#pragma once
#include <vector>

class TwoDGrid {
public:
    TwoDGrid(int rows, int cols);
    void printGrid() const;
    //add the start, obstacle or target to the 2D grid
    //The user should be able to ask for one of the known obstacles to be added.
    void addObstacle(int row, int col, char obst);
private:
enum class obstacles {
    Start,
    Obstacle,
    Target
};
    std::vector<std::vector<char>> grid2d;

protected:
};