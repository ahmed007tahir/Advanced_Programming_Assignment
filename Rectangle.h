//
// Created by ahmed on 17/11/2022.
//

#ifndef PROJECT_FOLDER_RECTANGLE_H
#define PROJECT_FOLDER_RECTANGLE_H


#include "Shape.h"
#include "Movable.h"

class Rectangle : public Shape, public Movable {

private:

    double height;
    double width;

public:

    // ----------- Constructors -------------//
    Rectangle();    // Rectangle  default constructor
    Rectangle(int xCoordinate, int yCoordinate, int height, int width);
    //---------------------------------------//

    double calculateArea() override;
    double calculatePerimeter() override;
    void calculatePoints() override;

    void move(int newX, int newY) override;
    void scale(float scaleX, float scaleY) override;

    std::string toString() override;
};


#endif //PROJECT_FOLDER_RECTANGLE_H