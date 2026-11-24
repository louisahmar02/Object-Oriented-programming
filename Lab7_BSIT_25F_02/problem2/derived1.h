#ifndef derived1_h
#define derived1_h
#include<iostream>
using namespace std;
#include "base.h"

class derived1 : public base{
    int b{};
public:
    derived1();
    derived1(int ,int );
    void print() const;
    ~derived1();
};

#endif