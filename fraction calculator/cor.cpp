#include <iostream>
#include "fraction.h"
using namespace std;   
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

void Fraction::print() {
    cout << numerator << "/" << denominator << endl;
}

Fraction Fraction::add(const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.denominator + other.numerator * denominator;
    result.denominator = denominator * other.denominator;
    return result;
}

Fraction Fraction::minus(const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.denominator - other.numerator * denominator;
    result.denominator = denominator * other.denominator;
    return result;
}

Fraction Fraction::multiply(const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.numerator;
    result.denominator = denominator * other.denominator;
    return result;
}

Fraction Fraction::divide(const Fraction& other) const {
    if (other.numerator == 0) {
        throw invalid_argument("Cannot divide by a fraction with a zero numerator.");
    }

    Fraction result;
    result.numerator = numerator * other.denominator;
    result.denominator = denominator * other.numerator;
    return result;
}