#include "base.h"
#include<iostream>
using namespace std;
base::base(){
    // cout << "Base Constructor:\n";
}

base::base(int val1) : a(val1) {}

void base::print() const{
    cout << "Base Member: " << a;
}
 
base::base(const base& rhs) : a(rhs.a) {}

base& base::operator=(const base& rhs){
    a = rhs.a;
    return *this;
}

base::~base(){
    // cout << "Base Destructor:\n";
}