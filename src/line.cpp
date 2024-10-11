#include <iostream>
#include "point.h"
#include "data.h"
#include "line.h"
using namespace std;

Line::Line(){
    cout << "Line constructed" << endl;
};

 void Line::draw(){
    string pts;
    cout << "Please provide coordinates (x,y) of first point: " << endl;
    cin >> d.p.x >> d.p.y;
    pts.append(to_string(d.p.x) + " " + to_string(d.p.y) + "\n");
    cout << "Please provide coordinates (x,y) of second point: " << endl;
    cin >> d.p.x >> d.p.y;
    pts.append(to_string(d.p.x) + " " + to_string(d.p.y));
    rnw.write(pts, "line.dat");
 }

 Line::~Line(){
    cout << "Line destructed" << endl;
}