//
// Created by ahmed on 17/11/2022.
//

#ifndef PROJECT_FOLDER_SHAPE_H
#define PROJECT_FOLDER_SHAPE_H
#include "Point.h"
#include <vector>

class Shape {

private:
    int area;
    bool isCircular;
    Point leftTop;
    int perimeter;
    std::vector<Point> points;
public:

    virtual void calculatePoints();
    virtual void calculateArea();
    virtual void claculatePerimeter();
    void toString();

};


#endif //PROJECT_FOLDER_SHAPE_H
