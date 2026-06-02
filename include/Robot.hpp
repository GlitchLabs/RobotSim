#pragma once
#include <iostream>
#include "Position.hpp"
class Robot {
public:

    Robot(int row, int col);
    void printCurrPos() const;
    Position getPosition();
private:

    Position pos;
};