#pragma once
#include "shape.h"

class Point : public Shape{
    public:
    double x;
    double y;

    Point();
    Point(const Point&);
    ~Point();
    Point(const double &, const double &);
    void draw();

    void getCoords();
};

extern Point p;