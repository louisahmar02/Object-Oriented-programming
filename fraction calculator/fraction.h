#include <iostream>
using namespace std;

// Fraction class represents a mathematical fraction (numerator/denominator)
// Demonstrates encapsulation with private data members and public methods
class Fraction{
    private: 
    int numerator{};      // Top part of the fraction (default 0)
    int denominator{1};   // Bottom part of the fraction (default 1 to avoid division by zero)

    public:
    // Getter methods (const to prevent modification)
    int get_Numerator() const;
    int get_Denominator() const;

    // Displays the fraction in numerator/denominator format
    void print();

    // Setter methods
    void set_Numerator(int);
    void set_Denominator(int);  // Includes protection against zero denominator

    // Arithmetic operations that return a new Fraction object
    Fraction add(const Fraction& f) const;
    Fraction minus(const Fraction&) const;
    Fraction multiply(const Fraction&) const;
    Fraction divide(const Fraction&) const;
};