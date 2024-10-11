#pragma once
#include <string>

using namespace std;


class readAndWrite{
    public:
    readAndWrite();
    void read(string file_name);
    void write(const string &data, const string &fpath);
    ~readAndWrite();
};

extern readAndWrite rnw;