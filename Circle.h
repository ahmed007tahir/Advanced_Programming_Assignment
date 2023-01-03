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

    int radius;

public:

    // ----------- Constructors -------------//
    Circle();   // Circle default constructor
    Circle(int xCoordinate, int yCoordinate, int radius);
    //---------------------------------------//


    double calculateArea() override;
    double calculatePerimeter() override;
    void calculatePoints() override;


    void move();
    void scale();
    void toString();
};


#endif //PROJECT_FOLDER_CIRCLE_H
