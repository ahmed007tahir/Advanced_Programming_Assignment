//
// Created by ahmed on 17/11/2022.
//

#include "Square.h"

Square::Square() : Shape()
{
    edge = 0;
}

Square::Square(int xCoordinate, int yCoordinate, int edge) : Shape(xCoordinate, yCoordinate, edge)
{
    this->edge = edge;
}


double Square::calculateArea() {
    return pow(edge,2);
}

double Square::calculatePerimeter() {
    return edge * 4;
}


void Square::calculatePoints() {
    std::vector<Point> newPoints;
    Point leftTopPoint = getLeftTopPoint();
    Point rightTopPoint = Point(leftTopPoint.getXCoordinate() + edge, leftTopPoint.getYCoordinate());
    Point rightBottomPoint = Point(leftTopPoint.getXCoordinate() + edge, leftTopPoint.getYCoordinate() + edge);
    Point leftBottomPoint = Point(leftTopPoint.getXCoordinate(), leftTopPoint.getYCoordinate() + edge);

    newPoints.push_back(leftTopPoint);
    newPoints.push_back(rightTopPoint);
    newPoints.push_back(rightBottomPoint);
    newPoints.push_back(leftBottomPoint);

    setPoints(newPoints);
}

void Square::move(int newX, int newY) {
    Point newTopLeftPoint(newX, newY);
    setLeftTopPoint(newTopLeftPoint);
    calculatePoints();
}
