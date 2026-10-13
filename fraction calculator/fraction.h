#include <iostream>
using namespace std;

class Fraction{
    private: 
    int numerator{};
    int denominator{1};

    public:
    int get_Numerator() const;
    int get_Denominator() const;
    void print();
    void set_Numerator(int);
    void set_Denominator(int);
    Fraction add(const Fraction& f) const;
    Fraction minus(const Fraction&) const;
    Fraction multiply(const Fraction&) const;
    Fraction divide(const Fraction&) const;
};