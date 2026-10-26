#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction(int num, int den){
    numerator = num;
    
    if (den == 0) {
        cout << "Error in denominator, setting it to 1." << endl;
        denominator = 1;
    }
    else {
        denominator = den;
    }
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
        return Fraction();
    }

    Fraction result;
    result.numerator = numerator * rhs.denominator;
    result.denominator = denominator * rhs.numerator;
    return result;
}

bool Fraction::operator<(const Fraction& rhs) const {
    return numerator * rhs.denominator < denominator * rhs.numerator? true : false;
}
bool Fraction::operator==(const Fraction& rhs) const {
    return numerator * rhs.denominator == denominator * rhs.numerator? true : false;
}
bool Fraction::operator>(const Fraction& rhs) const {
    return !(*this <= rhs);
}
bool Fraction::operator!=(const Fraction& rhs) const {
    return !(*this == rhs);
}
bool Fraction::operator<=(const Fraction& rhs) const {
    return (*this < rhs) || (*this == rhs);
}
bool Fraction::operator>=(const Fraction& rhs) const {
    return (*this > rhs) || (*this == rhs);
}

Fraction& Fraction::operator=(const Fraction& rhs) {
    if (this != &rhs) {
        numerator = rhs.numerator;
        denominator = rhs.denominator;
    }

    return *this;
}
Fraction Fraction::operator+(const Fraction& rhs) const {
    return add(rhs);
}
Fraction Fraction::operator-(const Fraction& rhs) const {
    return minus(rhs);
}
Fraction Fraction::operator*(const Fraction& rhs) const {
    return multiply(rhs);
}
Fraction Fraction::operator/(const Fraction& rhs) const {
    return divide(rhs);
}
Fraction& Fraction::operator++() {
    numerator += denominator;
    return *this;
}
Fraction Fraction::operator++(int) {
    Fraction prev_val = *this;
    ++(*this);
    return prev_val;
}
Fraction& Fraction::operator--() {
    numerator -= denominator;
    return *this;
}
Fraction Fraction::operator--(int) {
    Fraction prev_val = *this;
    --(*this);
    return prev_val;
}

istream& operator>>(istream& is, Fraction& rhs) {
    int num{}, den{};

    is >> num >> den;
       
            rhs.set_Numerator(num);
            rhs.set_Denominator(den);
    

    return is;
}
