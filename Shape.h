//
// Created by ahmed on 17/11/2022.
//

#ifndef PROJECT_FOLDER_SHAPE_H
#define PROJECT_FOLDER_SHAPE_H
#include <iostream>
#include <vector>
#include <cmath>
#include "Point.h"

class Shape {

private:

    double area{};                // holds the value for the area of the shape
    double perimeter{};           // holds the value for the perimeter of the shape
    bool isCircular = false;    // this flag is set to true if the shape is a circle
    Point leftTop;              // holds the x and y coordinates of the top left most part of the shape
    std::vector<Point> points;  // holds the coordinates of the corners of the shape in the order: 1. leftTop, rightTop, rightBottom and leftBottom for squares and rectangles, and 2. topLeft and bottomRight for circles

public:

    // ----------- Constructors -------------//
    Shape();                                                            // Shape default constructor
    Shape(int xCoordinate, int yCoordinate, float length);                // Shape constructor for square and circular shapes
    Shape(int xCoordinate, int yCoordinate, float height, float width);     // Shape constructor for rectangular shapes
    // -------------- Setters ---------------//
    void setIsCircular() {isCircular = true;};
    void setArea(double newArea) {this->area = newArea;};
    void setPerimeter(double newPerimeter) {this->perimeter = newPerimeter;};
    void setLeftTopPoint(Point newTopLeftPoint) {this->leftTop = newTopLeftPoint;};
    void setPoints(const std::vector<Point>& newPoints) {this->points = newPoints;};
    // -------------- Getters ---------------//
    Point getLeftTopPoint() {return leftTop;};
    std::vector<Point> getPoints() {return points;};
    //---------------------------------------//


    virtual void calculatePoints() = 0;
    virtual double calculateArea() = 0;
    virtual double calculatePerimeter() = 0;
    virtual std::string toString() = 0;

};


#endif //PROJECT_FOLDER_SHAPE_H
