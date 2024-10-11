#include <iostream>
#include "polygon.h"
#include "point.h"
#include "data.h"
#include "readAndWrite.h"
using namespace std;

Polygon::Polygon(){
    cout << "Polygon constructed" << endl;
}

void Polygon::draw(){
  int sides = 0;
  do{
    cout << "How many sides does you polygon have?: " << endl;
    cin >> sides;
    if(sides < 3){
      cout << "Polygon must have more than  2 sides" << endl;
      continue;
    }
    for (int i=0;i<sides;i++){
      cout << "Enter the coordinates(x,y) of the " << i+1 << " vertex: " << endl;
      cin >> d.p.x >> d.p.y;
      d.str.append(to_string(d.p.x) + " " + to_string(d.p.y) + "\n");
    }
  }while (sides < 3);
  int i = 0;
  while(d.str[i] != '\n'){
    d.str.append(to_string(d.str[i]));
    i++;
  }
  rnw.write(d.str, "polygon.dat");
}

Polygon::~Polygon(){
  cout << "Polygon destructed" << endl;
}