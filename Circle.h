//
// Created by ahmed on 17/11/2022.
//

#ifndef PROJECT_FOLDER_CIRCLE_H
#define PROJECT_FOLDER_CIRCLE_H


#include "Shape.h"
#include "Movable.h"


class Circle : public Shape, public Movable {

private:
    int radius;

public:

    // Circle Constructor
    Circle(int xCoordinate, int yCoordinate, int radius) : Shape() {xCoordinate, yCoordinate, radius, false;};


    void calcuteArea();
    void calculatePerimeter();
    void calculatePoint();
    void move();
    void scale();
    void toString();
};


#endif //PROJECT_FOLDER_CIRCLE_H
