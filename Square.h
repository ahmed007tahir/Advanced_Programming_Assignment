//
// Created by ahmed on 17/11/2022.
//

#ifndef PROJECT_FOLDER_SQUARE_H
#define PROJECT_FOLDER_SQUARE_H


#include "Shape.h"
#include "Movable.h"

class Square : public Shape, public Movable {
private:
    int edge;

public:

    // Square Constructor
    Square(int xCoordinate, int yCoordinate, int edge) : Shape() {xCoordinate, yCoordinate, edge, false;};

    void calcuteArea();
    void calculatePerimeter();
    void calculatePoint();
    void move();
    void scale();
    void toString();
};


#endif //PROJECT_FOLDER_SQUARE_H
