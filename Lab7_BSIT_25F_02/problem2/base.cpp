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

base::~base(){
    // cout << "Base Destructor:\n";
}