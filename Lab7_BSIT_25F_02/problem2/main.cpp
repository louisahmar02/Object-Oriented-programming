#include<iostream>
using namespace std;
#include "derived2.h"

int main(){
derived1 d1(2,4);
derived2 d2(10, 20, 30);
d2.print();				//The function shall print the values.

return 0;


}