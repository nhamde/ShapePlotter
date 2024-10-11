#pragma once
#include "point.h"
#include "readAndWrite.h"
using namespace std;

class Manager{
public:
    string sh;

public:
    void askUser();
    Manager();
    ~Manager();
};

extern Manager Man;