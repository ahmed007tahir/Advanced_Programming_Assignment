//
// Created by ahmed on 17/11/2022.
//

#include "Rectangle.h"

Rectangle::Rectangle() : Shape()
{
    height = 0;
    width = 0;
}

Rectangle::Rectangle(int xCoordinate, int yCoordinate, int height, int width) : Shape(xCoordinate, yCoordinate, height, width)
{
    this->width = width;
    this->height = height;
}


double Rectangle::calculateArea() {
    return width * height;
}

double Rectangle::calculatePerimeter() {
    return (width * 2) + (height * 2);
}


void Rectangle::calculatePoints() {
    std::vector<Point> newPoints;

    Point leftTopPoint = getLeftTopPoint();
    Point rightTopPoint = Point(leftTopPoint.getXCoordinate() + width, leftTopPoint.getYCoordinate());
    Point rightBottomPoint = Point(leftTopPoint.getXCoordinate() + width, leftTopPoint.getYCoordinate() + height);
    Point leftBottomPoint = Point(leftTopPoint.getXCoordinate(), leftTopPoint.getYCoordinate() + height);

    newPoints.push_back(leftTopPoint);
    newPoints.push_back(rightTopPoint);
    newPoints.push_back(rightBottomPoint);
    newPoints.push_back(leftBottomPoint);

    setPoints(newPoints);
}
