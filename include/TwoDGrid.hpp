#pragma once
#include <vector>
#include "Position.hpp"

class TwoDGrid {
public:
    TwoDGrid(int rows, int cols);
    void printGrid() const;
    //add the start, obstacle or target to the 2D grid
    //The user should be able to ask for one of the known obstacles to be added.
    void addObstacle(Position pos, char obst);
    //void updateObstacle(Position pos, direction dir);
    bool isValidMove(Position pos,direction dir);
private:
enum class obstacles {
    Start,
    Obstacle,
    Target
};
    std::vector<std::vector<char>> grid2d;

protected:
};