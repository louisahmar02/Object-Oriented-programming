
#ifndef fraction_h
#define fraction_h

#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator{};
    int denominator{1};

public:
    Fraction(int num = 0, int den = 1);
    Fraction(const Fraction& rhs);
    ~Fraction();

    int get_Numerator() const;
    int get_Denominator() const;

    void set_Numerator(int value);
    void set_Denominator(int value);

    void print() const;

    Fraction add(const Fraction& rhs) const;
    Fraction minus(const Fraction& rhs) const;
    Fraction multiply(const Fraction& rhs) const;
    Fraction divide(const Fraction& rhs) const;

    bool operator<(const Fraction& rhs) const;
    bool operator==(const Fraction& rhs) const;
    bool operator>(const Fraction& rhs) const;
    bool operator!=(const Fraction& rhs) const;
    bool operator<=(const Fraction& rhs) const;
    bool operator>=(const Fraction& rhs) const;

    Fraction& operator=(const Fraction& rhs);

    Fraction operator+(const Fraction& rhs) const;
    Fraction operator-(const Fraction& rhs) const;
    Fraction operator*(const Fraction& rhs) const;
    Fraction operator/(const Fraction& rhs) const;

    Fraction operator-() const;
    Fraction operator+() const;

    Fraction& operator++();
    Fraction operator++(int);
    Fraction& operator--();
    Fraction operator--(int);
};

istream& operator>>(istream& is, Fraction& rhs);
ostream& operator<<(ostream& os, const Fraction& rhs);

#endif
