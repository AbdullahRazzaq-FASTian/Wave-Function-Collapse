#pragma once
#include <iostream>
#include <vector>
#include <tile.hpp>

class grid
{
    const int gridDim = 800; // 2-Dimentional
    int numTile = 0;
    std::vector<tile> tiles;

public:
    grid(int numTile);
};