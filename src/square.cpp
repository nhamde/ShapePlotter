#include <iostream>
#include "square.h"
#include "point.h"
#include "data.h"
#include "readAndWrite.h"
using namespace std;

Square::Square(){
   cout << "Square constructed" << endl;
}

void Square::draw(){
   cout << "Please input coordinates (x,y) of left bottom corner of square: " << endl;
   cin >> d.p.x >> d.p.y;
   cout << "Please input side of square: " << endl;
   cin >> d.s;
   d.str.append(to_string(d.p.x) + " " + to_string(d.p.y) + "\n");
   d.str.append(to_string(d.p.x) + " " + to_string(d.p.y+d.s) + "\n");
   d.str.append(to_string(d.p.x+d.s) + " " + to_string(d.p.y+d.s) + "\n");
   d.str.append(to_string(d.p.x+d.s) + " " + to_string(d.p.y) + "\n");
   d.str.append(to_string(d.p.x) + " " + to_string(d.p.y) + "\n");
   rnw.write(d.str, "square.dat");
}

Square::~Square(){
   cout << "Square destructed" << endl;
}