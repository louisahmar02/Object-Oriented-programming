#ifndef base_h
#define base_h

#include <iostream>
using namespace std;

class base{
    int a{};
public:
    base();
    base(int );
    void print() const;
    ~base();
};

#endif