#pragma once
#include <iostream>
#include "Position.hpp"
#include "TwoDGrid.hpp"
class Robot {
public:

    Robot(int row, int col);
    void printCurrPos() const;
    Position getPosition();
    void move( direction movement, TwoDGrid& grid);
private:

    Position pos;
};