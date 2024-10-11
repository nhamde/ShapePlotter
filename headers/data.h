#pragma once
#include "point.h"
#include "manager.h"

class Data{
    public:
    string str;
    Point p, tp1, tp2, tp3;
    double l;
    double b;
    double r;
    double s;

    Data();
    ~Data();
};

extern Data d;