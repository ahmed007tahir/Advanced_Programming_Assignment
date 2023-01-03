//
// Created by ahmed on 17/11/2022.
//

#include "Shape.h"

Shape::Shape() {
    perimeter = 0;
    area = 0;
}

Shape::Shape(int xCoordinate, int yCoordinate, int height, int width)
{
    leftTop = Point(xCoordinate, yCoordinate);
}

Shape::Shape(int xCoordinate, int yCoordinate, int length)
{
    leftTop = Point(xCoordinate, yCoordinate);
}

std::string Shape::toString() {
    return std::string();
}


//TylerMSFT (2021). Overloading the < Operator for Your Own Classes. [online] learn.microsoft.com. Available at: https://learn.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170 [Accessed 8 Dec. 2022].
std::ostream& operator <<(std::ostream& os, Shape* shape)
{
    os << shape->toString();
    return os;
}