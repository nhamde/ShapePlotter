#include <iostream>
#include "point.h"
using namespace std;

 Point::Point(){ 
    x = 0.0;
    y = 0.0;
 }
 Point::Point(const double &x, const double &y){
    this->x = x;
    this->y = y;
 }
 
 Point::Point(const Point& other) = default;

 void Point::draw(){
   cout << "drawing Point" << endl;
 }

  Point::~Point(){
 }