//
// Created by ahmed on 17/11/2022.
//

#ifndef PROJECT_FOLDER_SHAPE_H
#define PROJECT_FOLDER_SHAPE_H
#include <vector>
#include <iostream>
#include "Point.h"

class Shape {

private:
    int area;                   // holds the value for the area of the shape
    int perimeter;              // holds the value for the perimeter of the shape
    bool isCircular;            // this flag is set to true if the shape is a circle
    Point leftTop;              // holds the x and y coordinates of the top left most part of the shape
    std::vector<Point> points;  // holds the coordinates of the corners of the shape in the order: 1. leftTop, rightTop, rightBottom and leftBottom for squares and rectangles, and 2. topLeft and bottomRight for circles
public:

    // ----------- Constructors -------------//
    Shape();    // Shape default constructor
    Shape(int xCoordinate, int yCoordinate, int radius, bool flag);    // Shape constructor for circular shapes
    Shape(int xCoordinate, int yCoordinate, int height, int width);     // Shape constructor for four sided shapes
    //---------------------------------------//

    // isCircular Setter
    void setCircular();

    virtual void calculatePoints() = 0;
    virtual void calculateArea();
    virtual void claculatePerimeter();
    std::string toString();

};


#endif //PROJECT_FOLDER_SHAPE_H
