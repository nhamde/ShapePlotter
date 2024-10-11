#pragma once
#include "point.h"
#include "shape.h"
using namespace std;

class Line : public Shape{
    public:
    Point p1;
    Point p2;

    Line();
    ~Line();
    void draw();
};