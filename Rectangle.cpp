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

    Point leftTopPoint = getLeftTopPoint();
    Point rightTopPoint = Point(int(leftTopPoint.getXCoordinate() + width), leftTopPoint.getYCoordinate());
    Point rightBottomPoint = Point(int(leftTopPoint.getXCoordinate() + width), int(leftTopPoint.getYCoordinate() + height));
    Point leftBottomPoint = Point(leftTopPoint.getXCoordinate(), int(leftTopPoint.getYCoordinate() + height));

    refPoints.clear();
    refPoints.push_back(leftTopPoint);
    refPoints.push_back(rightTopPoint);
    refPoints.push_back(rightBottomPoint);
    refPoints.push_back(leftBottomPoint);

}

void Rectangle::move(int newX, int newY) {
    Point newTopLeftPoint(newX, newY);
    setLeftTopPoint(newTopLeftPoint);
    calculatePoints();
}

void Rectangle::scale(float scaleX, float scaleY) {
    width *= scaleX;
    height *= scaleY;
    calculatePoints();
}

std::string Rectangle::toString() {
    calculatePoints();
    std::string prompt = "Rectangle[h=" + std::to_string(height) + ",w=" + std::to_string(width) + "]\nPoints[(" + std::to_string(refPoints.at(0).getXCoordinate()) + "," + std::to_string(refPoints.at(0).getYCoordinate()) + ")(" + std::to_string(refPoints.at(1).getXCoordinate()) + "," + std::to_string(refPoints.at(1).getYCoordinate()) + ")(" + std::to_string(refPoints.at(2).getXCoordinate()) + "," + std::to_string(refPoints.at(2).getYCoordinate()) + ")(" + std::to_string(refPoints.at(3).getXCoordinate()) + "," + std::to_string(refPoints.at(3).getYCoordinate()) + ")]\nArea=" +
                         std::to_string(calculateArea()) + " Perimeter=" + std::to_string(calculatePerimeter());
    return prompt;
}