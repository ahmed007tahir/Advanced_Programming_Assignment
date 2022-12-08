//
// Created by ahmed on 17/11/2022.
//

#ifndef PROJECT_FOLDER_RECTANGLE_H
#define PROJECT_FOLDER_RECTANGLE_H


#include "Shape.h"
#include "Movable.h"

class Rectangle : public Shape, public Movable {
private:
    int height;
    int width;

public:

    Rectangle(int xCoordinate, int yCoordinate, int height, int width) : Shape() {xCoordinate, yCoordinate, height, width;};


    void calcuteArea();
    void calculatePerimeter();
    void calculatePoint();
    void move();
    void scale();
    void toString();

    // constructor
};


#endif //PROJECT_FOLDER_RECTANGLE_H
