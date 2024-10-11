#include <iostream>
#include "readAndWrite.h"
#include "data.h"
#include "point.h"
#include "rectangle.h"
#include "circle.h"
#include "line.h"
#include "triangle.h"
#include "square.h"
#include "polygon.h"
#include "manager.h"
using namespace std;

readAndWrite rnw;
Data d;

Manager::Manager(){
    cout << "Manager Constructed" << endl;
}

void Manager:: askUser(){
    cout << "What do you want to draw: " << endl;
    cin >> sh;
    if (sh=="rectangle"){
        Rectangle rect;
        rect.draw();
    }
    else if (sh=="circle"){
        Circle C;
        C.draw();
    }
    else if (sh=="line"){
        Line line;
        line.draw();
    }
    else if (sh=="triangle"){
        Triangle tri;
        tri.draw();
    }
    else if (sh=="square"){
        Square sq;
        sq.draw();
    }
    else if (sh=="polygon"){
        Polygon poly;
        poly.draw();
    }
}

Manager::~Manager(){
    cout << "Manager destructed" << endl;
}

Manager Man;