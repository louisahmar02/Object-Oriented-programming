#include "derived1.h"
#include<iostream>
using namespace std;
derived1::derived1(){
    base();
    // cout << "Derived1 Constructor:\n";
}

derived1::derived1(int val1, int val2) : base(val1), b(val2) {}

void derived1::print() const
{
    base::print();
    cout << "\nDerived1 Member: " << b;
}

derived1::derived1(const derived1& rhs) : base(rhs), b(rhs.b) {}

derived1& derived1::operator=(const derived1& rhs){
    base::operator=(rhs);
    b = rhs.b;
    return *this;

}


derived1::~derived1(){
    // cout << "Derived1 Destructor:\n";
}