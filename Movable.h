//
// Created by ahmed on 17/11/2022.
//

#ifndef PROJECT_FOLDER_MOVABLE_H
#define PROJECT_FOLDER_MOVABLE_H


class Movable {

public:
    virtual void move(int newX, int newY) = 0;
    virtual void scale(float scaleX, float scaleY) = 0;
};


#endif //PROJECT_FOLDER_MOVABLE_H
