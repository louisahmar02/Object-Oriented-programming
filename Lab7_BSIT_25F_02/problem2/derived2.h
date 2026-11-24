#ifndef derived2_h
#define derived2_h
#include<iostream>
using namespace std;
#include "derived1.h"

class derived2 : public derived1{
    int c{};
public:
    derived2();
    derived2(int , int , int);
    void print() const;
    ~derived2();
};

#endif