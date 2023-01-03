//
// Created by ahmed on 17/11/2022.
//

#include "Circle.h"

Circle::Circle() : Shape()
{
    setIsCircular();
    radius = 0;
}

Circle::Circle(int xCoordinate, int yCoordinate, int radius) : Shape(xCoordinate, yCoordinate, radius)
{
    setIsCircular();
    this->radius = radius;
}


double Circle::calculateArea() {
    return std::numbers::pi * pow(radius,2);
}

double Circle::calculatePerimeter() {
    return std::numbers::pi * radius * 2;
}


void Circle::calculatePoints() {
    std::vector<Point> newPoints;
    Point leftTopPoint = getLeftTopPoint();
    Point rightBottomPoint = Point(leftTopPoint.getXCoordinate() + (2 * radius), leftTopPoint.getYCoordinate() + (2 * radius));

    newPoints.push_back(leftTopPoint);
    newPoints.push_back(rightBottomPoint);

    setPoints(newPoints);
}
