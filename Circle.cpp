//
// Created by ahmed on 17/11/2022.
//

#include "Circle.h"

Circle::Circle() : Shape()
{
    setIsCircular();
    radius = 0;
}

Circle::Circle(int xCoordinate, int yCoordinate, float radius) : Shape(xCoordinate, yCoordinate, radius)
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
    Point leftTopPoint = getLeftTopPoint();
    Point rightBottomPoint = Point(int(leftTopPoint.getXCoordinate() + (2 * radius)), int(leftTopPoint.getYCoordinate() + (2 * radius)));

    refPoints.clear();
    refPoints.push_back(leftTopPoint);
    refPoints.push_back(rightBottomPoint);
}

std::string Circle::toString() {
    calculatePoints();
    std::string prompt = "Circle[r=" + std::to_string(radius) + "]\nPoints[(" + std::to_string(refPoints.at(0).getXCoordinate()) + "," + std::to_string(refPoints.at(0).getYCoordinate()) + ")(" + std::to_string(refPoints.at(1).getXCoordinate()) + "," + std::to_string(refPoints.at(1).getYCoordinate()) + ")]\n Area=" +
            std::to_string(calculateArea()) + " Perimeter=" + std::to_string(calculatePerimeter());
    return prompt;
}

void Circle::move(int newX, int newY) {
    Point newLeftTopPoint(newX, newY);
    setLeftTopPoint(newLeftTopPoint);
    calculatePoints();
}

void Circle::scale(float scaleX, float scaleY) {
    radius *= scaleX;
    calculatePoints();
}

