#include<iostream>
using namespace std;
#include "derived2.h"

int main(){
derived2 d2(10, 20, 30);
derived2 d3 {d2};
cout << d2 <<endl;
cout << d3 <<endl;

d3.setValue(-12);
d2 = d3;
cout << d2 << endl;

return 0;

}