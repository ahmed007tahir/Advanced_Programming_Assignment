//
// Created by ahmed on 17/11/2022.
//

#include "Shape.h"

Shape::Shape() : leftTop(0,0)
{
    perimeter = 0;
    area = 0;
}

Shape::Shape(int xCoordinate, int yCoordinate, float height, float width)
{
    leftTop = Point(xCoordinate, yCoordinate);
}

Shape::Shape(int xCoordinate, int yCoordinate, float length)
{
    leftTop = Point(xCoordinate, yCoordinate);
}


//TylerMSFT (2021). Overloading the < Operator for Your Own Classes. [online] learn.microsoft.com. Available at: https://learn.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170 [Accessed 8 Dec. 2022].
std::ostream& operator <<(std::ostream& os, Shape* shape)
{
    os << shape->toString();
    return os;
}