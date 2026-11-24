#include "derived2.h"
#include<iostream>
using namespace std;
derived2::derived2(){
    derived1();
    // cout << "Derived2 Constructor:\n";
}

derived2::derived2(int val1, int val2, int val3) : derived1(val1,val2), c(val3) {}

void derived2::print() const{
    derived1::print();
    cout << "\nDerived2 Member: " << c;
}

derived2::~derived2(){
    // cout << "Derived2 Destructor:\n";
}

void derived2::setValue(int val){
    c = val;
}


derived2::derived2(const derived2& rhs) : derived1(rhs) , c(rhs.c) {}

derived2& derived2::operator=(const derived2& rhs){
    derived1::operator=(rhs);
    c = rhs.c;
    return *this;
    
    }