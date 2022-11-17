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
    void calcuteArea();
    void calculatePerimeter();
    void calculatePoint();
    void move();
    void scale();
    void toString();
};


#endif //PROJECT_FOLDER_RECTANGLE_H
