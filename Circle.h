//
// Created by ahmed on 17/11/2022.
//

#ifndef PROJECT_FOLDER_CIRCLE_H
#define PROJECT_FOLDER_CIRCLE_H

#include <cmath>
#include "Shape.h"
#include "Movable.h"


class Circle : public Shape, public Movable {

private:

    double radius;

public:

    // ----------- Constructors -------------//
    Circle();   // Circle default constructor
    Circle(int xCoordinate, int yCoordinate, float radius);
    //---------------------------------------//


    double calculateArea() override;
    double calculatePerimeter() override;
    void calculatePoints() override;

    std::string toString() override;
    void move(int newX, int newY) override;
    void scale(float scaleX, float scaleY) override;


    };


#endif //PROJECT_FOLDER_CIRCLE_H
