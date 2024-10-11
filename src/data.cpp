#include "manager.h"
#include "data.h"
#include <iostream>
using namespace std;


Data::Data(){
    cout << "Data constructed" << endl;
}
Data::~Data(){
    cout << "Data destructed" << endl;
}