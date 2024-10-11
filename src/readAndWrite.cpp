#include <iostream>
#include <fstream>
#include "readAndWrite.h"
using namespace std;

readAndWrite::readAndWrite(){
    cout << "reader and writer constructed" << endl;
}

// void readAndWrite::read(string file_name){
//     string data;
//     ifstream in(file_name);
//     getline(in, data);
//     cout << data << endl;
// }

void readAndWrite::write(const string &data, const string &fpath){
    ofstream out(fpath);
    out << data;
    out.close();
}

readAndWrite::~readAndWrite(){
    cout << "reader and writer destructed" << endl;
}