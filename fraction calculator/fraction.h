#include <iostream>
using namespace std;

/**
 * Fraction class
 * Represents a simple mathematical fraction (numerator / denominator).
 * This class demonstrates Object-Oriented Programming concepts:
 * - Encapsulation (private data members)
 * - Getter and Setter methods
 * - Arithmetic operations returning new objects
 */
class Fraction{
    private: 
    int numerator{};      // Top part of the fraction (default 0)
    int denominator{1};   // Bottom part of the fraction (default 1 to avoid division by zero)

    public:
    // Getter methods (const to prevent modification of the object)
    int get_Numerator() const;
    int get_Denominator() const;

    // Displays the fraction in "numerator/denominator" format
    void print();

    // Setter methods
    void set_Numerator(int);           // Sets the numerator value
    void set_Denominator(int);         // Sets the denominator (blocks zero value)

    // Arithmetic operations - each returns a new Fraction object
    Fraction add(const Fraction& f) const;       // Addition
    Fraction minus(const Fraction&) const;       // Subtraction
    Fraction multiply(const Fraction&) const;    // Multiplication
    Fraction divide(const Fraction&) const;      // Division
};