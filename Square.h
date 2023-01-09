//
// Created by ahmed on 17/11/2022.
//

#ifndef PROJECT_FOLDER_SQUARE_H
#define PROJECT_FOLDER_SQUARE_H

#include <cmath>
#include "Shape.h"
#include "Movable.h"

class Square : public Shape, public Movable {

private:
    double edge;

public:

    // ----------- Constructors -------------//
    Square();   // Square default constructor
    Square(int xCoordinate, int yCoordinate, int edge);
    //---------------------------------------//

    double calculateArea() override;
    double calculatePerimeter() override;
    void calculatePoints() override;

    void move(int newX, int newY) override;
    void scale(float scaleX, float scaleY) override;

    std::string toString() override;
};



#endif //PROJECT_FOLDER_SQUARE_H
