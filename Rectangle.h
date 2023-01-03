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

    // ----------- Constructors -------------//
    Rectangle();    // Rectangle  default constructor
    Rectangle(int xCoordinate, int yCoordinate, int height, int width);
    //---------------------------------------//


    double calculateArea() override;
    double calculatePerimeter() override;
    void calculatePoints() override;

    void move();
    void scale();
    void toString();

    // constructor
};


#endif //PROJECT_FOLDER_RECTANGLE_H
