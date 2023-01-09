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
    double area{};              // holds the value for the area of the shape
    double perimeter{};         // holds the value for the perimeter of the shape
    bool isCircular = false;    // this flag is set to true if the shape is a circle
    Point leftTop;              // holds the x and y coordinates of the top left most part of the shape
    std::vector<Point> points;  // holds the coordinates of the corners of the shape in the order: 1. leftTop, rightTop, rightBottom and leftBottom for squares and rectangles, and 2. topLeft and bottomRight for circles

public:
    // ----------- Constructors -------------//
    Shape();                                                            // Shape default constructor
    Shape(int xCoordinate, int yCoordinate, float length);              // Shape constructor for square and circular shapes
    Shape(int xCoordinate, int yCoordinate, float height, float width); // Shape constructor for rectangular shapes
    // -------------- Setters ---------------//
    void setIsCircular() {isCircular = true;};      // Setter method for the private bool property 'isCircular'. This property is set to True when the shape is Circular and false otherwise.
    void setLeftTopPoint(Point newTopLeftPoint) {this->leftTop = newTopLeftPoint;};     // This setter method is used to update the private 'letftop' property of the object.
    // -------------- Getters ---------------//
    Point getLeftTopPoint() {return leftTop;};
    std::vector<Point>& refPoints = points;
    //---------------------------------------//
    virtual void calculatePoints() = 0;             // This virtual method when overloaded will allow child classes to calculate the 'points' property of the object.
    virtual double calculateArea() = 0;             // This virtual method when overloaded will allow child classes to calculate the 'area' property of the object.
    virtual double calculatePerimeter() = 0;        // This virtual method when overloaded will allow child classes to calculate the 'perimeter' property of the object.
    virtual std::string toString() = 0;             // This virtual method when overloaded will print out to the console a description of the child object.
    ~Shape() = default;
};
#endif //PROJECT_FOLDER_SHAPE_H
