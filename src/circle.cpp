#include <iostream>
#include "circle.h"
#include "point.h"
#include "readAndWrite.h"
#include "data.h"
#include <cmath>
using namespace std;
const double PI = 3.14;

Circle::Circle(){
   cout << "Circle constructed" << endl;
}

void Circle::draw(){
   cout << "Please input coordinates(x,y) of center of circle: " << endl;
   cin >> d.p.x >> d.p.y;
   cout << "Please input radius of circle: " << endl;
   cin >> d.r;
   for (int i=0; i<360; i++){
      double angle = 2 * PI * i/360;
      d.p.x = d.p.x + d.r*cos(angle);
      d.p.y = d.p.y + d.r*sin(angle);
      d.str.append(to_string(d.p.x) + " " + to_string(d.p.y) + "\n");
   }
   d.str.append(to_string(d.p.x) + " " + to_string(d.p.y) + "\n");
   rnw.write(d.str, "circle.dat");
}

Circle::~Circle(){
   cout << "Circle destructed" << endl;
 }