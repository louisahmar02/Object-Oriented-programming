#include <iostream>
#include "fraction.h"
using namespace std;

// Returns the current numerator value
int Fraction::get_Numerator() const {
    return numerator;
}

// Returns the current denominator value
int Fraction::get_Denominator() const {
    return denominator;
}

// Sets a new value for the numerator
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

// Prints the fraction in the format: numerator/denominator
void Fraction::print() {
    cout << numerator << "/" << denominator << endl;
}

// Adds two fractions and returns the result as a new Fraction object
// Formula: a/b + c/d = (a*d + b*c) / (b*d)
Fraction Fraction::add(const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.denominator + other.numerator * denominator;
    result.denominator = denominator * other.denominator;
    return result;
}

// Subtracts the other fraction from this one
// Formula: a/b - c/d = (a*d - b*c) / (b*d)
Fraction Fraction::minus(const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.denominator - other.numerator * denominator;
    result.denominator = denominator * other.denominator;
    return result;
}

// Multiplies two fractions
// Formula: a/b * c/d = (a*c) / (b*d)
Fraction Fraction::multiply(const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.numerator;
    result.denominator = denominator * other.denominator;
    return result;
}

// Divides this fraction by the other fraction
// Formula: (a/b) / (c/d) = (a*d) / (b*c)
// Throws an exception if the other fraction has zero numerator
Fraction Fraction::divide(const Fraction& other) const {
    if (other.numerator == 0) {
        throw invalid_argument("Cannot divide by a fraction with a zero numerator.");
    }

    Fraction result;
    result.numerator = numerator * other.denominator;
    result.denominator = denominator * other.numerator;
    return result;
}
