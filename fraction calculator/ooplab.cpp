#include <iostream>
#include "fraction.h"
using namespace std;

int main(){
    Fraction f1,f2,f3;
    f1.print();
    f1.set_Numerator(12);
    f1.set_Denominator(5);
    f2.set_Numerator(25);
    f2.set_Denominator(7);
    f1.print();
    f2.print();

    f3.add(f2);
    f3.print();
    f3.minus(f2);
    f3.print();
    f3.divide(f2);
    f3.print();
    f3.multiply(f2);
    f3.print();



    f2 = f1;
    f2.print();
    f3.print();
    f3.set_Numerator(f1.get_Numerator()+5);
    f3.print();
    cout << "Address of f1 = " << &f1 << endl;
    cout << "Address of f2 = " << &f2 << endl;
    cout << "Address of f3 = " << &f3 << endl;

    return 0;
}
