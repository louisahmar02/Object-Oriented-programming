#ifndef derived2_h
#define derived2_h
#include <iostream>
using namespace std;
#include "derived1.h"

class derived2 : public derived1{
    int c{};
public:
    derived2();
    derived2(int, int, int);
    derived2(const derived2&);
    derived2& operator=(const derived2&);
    void setValue(int);
    void print() const;
    ~derived2();
};
#endif