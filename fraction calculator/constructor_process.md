# Constructor Process in Object-Oriented Programming

// This file explains how constructors work in C++ using the Fraction class as an example.
// It covers the purpose, types, and the step-by-step process of object construction.

## What is a Constructor?

// A constructor is a special member function of a class.
// It is automatically called when an object of that class is created.
// Its main purpose is to initialize the object's data members so the object starts in a valid state.

A **constructor** is a special member function of a class that is automatically called when an object of that class is created. Its main purpose is to **initialize** the object's data members.

### Key Characteristics of Constructors:
// Important rules that every constructor must follow:
- Same name as the class                  // Constructor name must match the class name exactly
- No return type (not even `void`)        // Constructors never return a value
- Automatically invoked when an object is created  // You do not call it manually
- Can be overloaded (multiple constructors with different parameters)  // Allows different ways to create objects

---

## Types of Constructors

### 1. Default Constructor
// This constructor is used when no arguments are provided during object creation.
// Example: Fraction f1;  --> calls the default constructor
- Takes no parameters
- Initializes members with default values

```cpp
// Default constructor definition
Fraction() {
    numerator = 0;      // Set numerator to 0 by default
    denominator = 1;    // Set denominator to 1 to avoid division by zero
}
```

### 2. Parameterized Constructor
// This constructor allows you to pass values at the time of object creation.
// Example: Fraction f2(5, 8);  --> calls the parameterized constructor
- Takes parameters to set initial values

```cpp
// Parameterized constructor definition
Fraction(int num, int den) {
    numerator = num;                // Assign the provided numerator
    if (den == 0) {
        denominator = 1;            // Avoid division by zero by setting to 1
    } else {
        denominator = den;          // Use the provided denominator if valid
    }
}
```

### 3. Copy Constructor
// This constructor creates a new object by copying the values from an existing object.
// Example: Fraction f3 = f2;  or  Fraction f3(f2);
- Creates a new object as a copy of an existing object

```cpp
// Copy constructor definition
Fraction(const Fraction& other) {
    numerator = other.numerator;        // Copy numerator from the other object
    denominator = other.denominator;    // Copy denominator from the other object
}
```

---

## Constructor Process (Step by Step)

// The following steps happen automatically whenever you create an object.

When you create an object like this:

```cpp
Fraction f1(3, 4);   // Using parameterized constructor
```

The following process happens:

1. **Memory Allocation**  
   // The compiler first allocates enough memory to store the object (for numerator and denominator).
   Memory is allocated for the object on the stack (or heap if using `new`).

2. **Constructor Call**  
   // Based on the arguments provided, the matching constructor is selected and called automatically.
   The matching constructor is automatically called.

3. **Initialization of Members**  
   // The constructor body (or initializer list) sets the values of the data members.
   Data members (`numerator` and `denominator`) are initialized with the given values (or default values).

4. **Object is Ready**  
   // Once the constructor finishes execution, the object is fully constructed and can be used safely.
   After the constructor finishes, the object is fully constructed and ready to use.

---

## Example: Adding Constructors to Fraction Class

// You can add these constructors inside the public section of the Fraction class in fraction.h
// Using initializer lists (shown below) is the preferred and more efficient way in modern C++.

You can add these constructors inside the `Fraction` class (in `fraction.h`):

```cpp
public:
    // Default constructor - initializes to 0/1
    Fraction() : numerator(0), denominator(1) {}

    // Parameterized constructor - takes numerator and denominator
    // Uses ternary operator to protect against zero denominator
    Fraction(int num, int den) : numerator(num), denominator(den == 0 ? 1 : den) {}

    // Copy constructor - creates a duplicate of an existing Fraction object
    Fraction(const Fraction& other) : numerator(other.numerator), denominator(other.denominator) {}
```

---

## Why Constructors Are Important?

// Constructors play a crucial role in writing safe and clean Object-Oriented code.

- Guarantee that objects start in a **valid state**     // No garbage values
- Prevent garbage values in data members               // Members are properly initialized
- Make object creation clean and readable              // Easy to understand how objects are created
- Support encapsulation and good OOP design            // Hides initialization details from the user

---

**Author:** Louis Rao  
**Repo:** Object-Oriented-programming  
**Topic:** Constructor Process in C++
