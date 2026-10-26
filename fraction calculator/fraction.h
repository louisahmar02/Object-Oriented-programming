#include<iostream>
using namespace std;
#ifndef fraction_h
#define fraction_h
class Fraction{
    private: 
    int numerator{};     
    int denominator{1};  
    public:
    int get_Numerator() const;
    int get_Denominator() const;

    void print() const;

    void set_Numerator(int);           
    void set_Denominator(int);        

    Fraction add(const Fraction& rhs) const;       
    Fraction minus(const Fraction& rhs) const;        
    Fraction multiply(const Fraction& rhs) const;     
    Fraction divide(const Fraction& rhs) const;

    //Fraction();
    //Fraction(int, int); 
    ~Fraction();
    Fraction(int num = 0, int den = 1);
    

    Fraction(const Fraction& rhs);

    ostream operator<<(ostream& os, const Fraction& rhs) const;
    istream operator>>(istream& is, Fraction& rhs);
    Fraction operator=(const Fraction& rhs);
    
};
#endif
