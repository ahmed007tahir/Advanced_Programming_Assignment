//
// Created by ahmed on 17/11/2022.
//

#ifndef PROJECT_FOLDER_POINT_H
#define PROJECT_FOLDER_POINT_H


class Point {

private:
    int x;
    int y;

public:
    // ----------- Constructors -------------//
    Point();                //Default Constructor: sets the x and y coordinate value to 0 by default
    Point(int x, int y);
    //---------------------------------------//

    int getXCoordinate() const {return x;};
    int getYCoordinate() const {return y;};

};


#endif //PROJECT_FOLDER_POINT_H
