#include <iostream>
#include <fstream>
#include "rectangle.h"
#include "readAndWrite.h"
#include "data.h"
#include "point.h"
using namespace std;

 Rectangle::Rectangle(){
  cout << "Rectangle constructed" << endl;
 };

void Rectangle::draw(){
    cout << "Input x of left-bottom corner: " << endl;
    cin >> d.p.x;
    cout << "Input y of left-bottom corner: " << endl;
    cin >> d.p.y;
    cout << "Input length and breadth of rectangle" << endl;
    cin >> d.l;
    cin >> d.b;

    d.str.append(to_string(d.p.x) + " " + to_string(d.p.y) + "\n");
    d.str.append(to_string(d.p.x) + " " + to_string(d.p.y+d.b) + "\n");
    d.str.append(to_string(d.p.x+d.l) + " " + to_string(d.p.y+d.b) + "\n");
    d.str.append(to_string(d.p.x+d.l) + " " + to_string(d.p.y) + "\n");
    d.str.append(to_string(d.p.x) + " " + to_string(d.p.y) + "\n");

    rnw.write(d.str, "rectangle.dat");
}

  Rectangle::~Rectangle(){
   cout << "Rectangle destructed" << endl;
 }