#include <iostream>
#include "shape.h"
using namespace std;

Shape::Shape(){
    cout << "Shape constructed" << endl;
}
Shape::~Shape(){
    cout << "Shape destruced" << endl;
}