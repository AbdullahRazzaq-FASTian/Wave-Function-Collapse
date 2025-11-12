#pragma once
#include <iostream>
class tile
{
    // Image Object
    std::string sockets[4]; // Directions / Sockets

public:
    tile(std::string imagePath, std::string sockets[4]);
    void rotate(int angle);            // Rotates tile to the give angle. e.g 90 degrees (vertical->horizontal)
    void draw(int X, int Y, int size); // Draw the image on (X,Y) position
};