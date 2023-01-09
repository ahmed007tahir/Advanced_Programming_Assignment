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
    Point leftTopPoint = getLeftTopPoint();
    Point rightTopPoint = Point(int(leftTopPoint.getXCoordinate() + edge), leftTopPoint.getYCoordinate());
    Point rightBottomPoint = Point(int(leftTopPoint.getXCoordinate() + edge), int(leftTopPoint.getYCoordinate() + edge));
    Point leftBottomPoint = Point(leftTopPoint.getXCoordinate(), int(leftTopPoint.getYCoordinate() + edge));

    refPoints.clear();
    refPoints.push_back(leftTopPoint);
    refPoints.push_back(rightTopPoint);
    refPoints.push_back(rightBottomPoint);
    refPoints.push_back(leftBottomPoint);

}

void Square::move(int newX, int newY) {
    Point newTopLeftPoint(newX, newY);
    setLeftTopPoint(newTopLeftPoint);
    calculatePoints();
}

void Square::scale(float scaleX, float scaleY) {
    edge *= scaleX;
    calculatePoints();
}

std::string Square::toString() {
    calculatePoints();
    std::string prompt = "Square[e=" + std::to_string(edge) + "]\nPoints[(" + std::to_string(refPoints.at(0).getXCoordinate()) + "," + std::to_string(refPoints.at(0).getYCoordinate()) + ")(" + std::to_string(refPoints.at(1).getXCoordinate()) + "," + std::to_string(refPoints.at(1).getYCoordinate()) + ")(" + std::to_string(refPoints.at(2).getXCoordinate()) + "," + std::to_string(refPoints.at(2).getYCoordinate()) + ")(" + std::to_string(refPoints.at(3).getXCoordinate()) + "," + std::to_string(refPoints.at(3).getYCoordinate()) + ")]\nArea=" +
                         std::to_string(calculateArea()) + " Perimeter=" + std::to_string(calculatePerimeter());
    return prompt;
}