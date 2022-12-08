//
// Created by ahmed on 17/11/2022.
//

#include "Shape.h"

Shape::Shape() {
    isCircular = false;

}

void Shape::setCircular() {
    isCircular = true;
}

Shape::Shape(int xCoordinate, int yCoordinate, int height, int width)
{
    leftTop = Point(xCoordinate, yCoordinate);
    Point rightTop = Point(xCoordinate + width, yCoordinate);
    Point rightBottom = Point(xCoordinate + width, yCoordinate + height);
    Point leftBottom = Point(xCoordinate, yCoordinate + height);

    points.push_back(leftTop);
    points.push_back(rightTop);
    points.push_back(rightBottom);
    points.push_back(leftBottom);


}

Shape::Shape(int xCoordinate, int yCoordinate, int length, bool flag) {
    isCircular = flag;
    leftTop = Point(xCoordinate, yCoordinate);
    points.push_back(leftTop);

    if (isCircular)
    {
        Point rightBottom = Point(xCoordinate + (2 * length), yCoordinate + (2 * length));
        points.push_back(rightBottom);
    }
    else
    {
        Point rightTop = Point(xCoordinate + length, yCoordinate);
        Point rightBottom = Point(xCoordinate + length, yCoordinate + length);
        Point leftBottom = Point(xCoordinate, yCoordinate + length);

        points.push_back(rightTop);
        points.push_back(rightBottom);
        points.push_back(leftBottom);
    }

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