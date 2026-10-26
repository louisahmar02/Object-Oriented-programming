#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction(int num, int den){
    numerator = num;
    denominator = den;
}

Fraction::Fraction(const Fraction& rhs) {
    numerator = rhs.numerator;
    denominator = rhs.denominator;
}
Fraction::~Fraction() {
//Destructor..;
}


int Fraction::get_Numerator() const {
    return numerator;
}

int Fraction::get_Denominator() const {
    return denominator;
}

void Fraction::set_Numerator(int value) {
    numerator = value;
}

void Fraction::set_Denominator(int value) {
    if (value == 0) {
        cout << "Error: Denominator cannot be zero. Setting to 1." << endl;
        denominator = 1;
        return;
    }

    denominator = value;
}

void Fraction::print() const{
    cout << numerator << "/" << denominator << endl;
}

Fraction Fraction::add(const Fraction& rhs) const {
    Fraction result;
    result.numerator = numerator * rhs.denominator + rhs.numerator * denominator;
    result.denominator = denominator * rhs.denominator;
    return result;
}

Fraction Fraction::minus(const Fraction& rhs) const {
    Fraction result;
    result.numerator = numerator * rhs.denominator - rhs.numerator * denominator;
    result.denominator = denominator * rhs.denominator;
    return result;
}

Fraction Fraction::multiply(const Fraction& rhs) const {
    Fraction result;
    result.numerator = numerator * rhs.numerator;
    result.denominator = denominator * rhs.denominator;
    return result;
}

Fraction Fraction::divide(const Fraction& rhs) const {
    if (rhs.numerator == 0) {
        cout<<"Cannot divide by a fraction with a zero numerator.";
        return -1;
    }

    Fraction result;
    result.numerator = numerator * rhs.denominator;
    result.denominator = denominator * rhs.numerator;
    return result;
}
