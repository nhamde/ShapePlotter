#include <iostream>
#include "triangle.h"
#include "point.h"
#include "data.h"
#include "readAndWrite.h"
using namespace std;

Triangle::Triangle(){
    cout << "Triangle constructed" << endl;
}

void Triangle::draw(){
  do{
    cout << "Please input coordinates(x,y) of first point: " << endl;
    cin >> d.tp1.x >> d.tp1.y;
    cout << "Please input coordinates(x,y) of second point: " << endl;
    cin >> d.tp2.x >> d.tp2.y;
    do{
    cout << "Please input coordinates(x,y) of third point: " << endl;
    cin >> d.tp3.x >> d.tp3.y;

    if (d.tp1.x==d.tp2.x && d.tp2.x==d.tp3.x || d.tp1.y==d.tp2.y && d.tp2.y==d.tp3.y)
    {
      cout << "All points lie on same line, please input the third point again: " << endl;
      continue;
    }
    else break;
    }while (1);

    if (d.tp1.x==d.tp2.x && d.tp1.y==d.tp2.y || d.tp2.x==d.tp3.x && d.tp2.y==d.tp3.y || d.tp1.x==d.tp3.x && d.tp1.y==d.tp3.y)
    {
      cout << "Some of two points are same. Enter again." << endl;
    }
    else break;
  }while(1);

  d.str.append(to_string(d.tp1.x) + " " + to_string(d.tp1.y) + "\n");
  d.str.append(to_string(d.tp2.x) + " " + to_string(d.tp2.y) + "\n");
  d.str.append(to_string(d.tp3.x) + " " + to_string(d.tp3.y) + "\n");

  int i=0;
  while ((d.str)[i]!='\n'){
    d.str += d.str[i];
    i++;
  }
  rnw.write(d.str, "triangle.dat");
}

Triangle::~Triangle(){
  cout << "Triangle destructed" << endl;
}