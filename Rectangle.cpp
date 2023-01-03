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
    Point rightTopPoint = Point(int(leftTopPoint.getXCoordinate() + width), leftTopPoint.getYCoordinate());
    Point rightBottomPoint = Point(int(leftTopPoint.getXCoordinate() + width), int(leftTopPoint.getYCoordinate() + height));
    Point leftBottomPoint = Point(leftTopPoint.getXCoordinate(), int(leftTopPoint.getYCoordinate() + height));

    newPoints.push_back(leftTopPoint);
    newPoints.push_back(rightTopPoint);
    newPoints.push_back(rightBottomPoint);
    newPoints.push_back(leftBottomPoint);

    setPoints(newPoints);
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
    std::string prompt = "Rectangle[h=" + std::to_string(height) + ",w=" + std::to_string(width) + "]\nPoints[(" + std::to_string(getPoints().at(0).getXCoordinate()) + "," + std::to_string(getPoints().at(0).getYCoordinate()) + ")(" + std::to_string(getPoints().at(1).getXCoordinate()) + "," + std::to_string(getPoints().at(1).getYCoordinate()) + ")(" + std::to_string(getPoints().at(2).getXCoordinate()) + "," + std::to_string(getPoints().at(2).getYCoordinate()) + ")(" + std::to_string(getPoints().at(3).getXCoordinate()) + "," + std::to_string(getPoints().at(3).getYCoordinate()) + ")]\n Area=" +
                         std::to_string(calculateArea()) + " Perimeter=" + std::to_string(calculatePerimeter());
    return prompt;
}