# Constructor Process in Object-Oriented Programming

## What is a Constructor?

A **constructor** is a special member function of a class that is automatically called when an object of that class is created. Its main purpose is to **initialize** the object's data members.

### Key Characteristics of Constructors:
- Same name as the class
- No return type (not even `void`)
- Automatically invoked when an object is created
- Can be overloaded (multiple constructors with different parameters)

---

## Types of Constructors

### 1. Default Constructor
- Takes no parameters
- Initializes members with default values

```cpp
Fraction() {
    numerator = 0;
    denominator = 1;
}
```

### 2. Parameterized Constructor
- Takes parameters to set initial values

```cpp
Fraction(int num, int den) {
    numerator = num;
    if (den == 0) {
        denominator = 1;  // Avoid division by zero
    } else {
        denominator = den;
    }
}
```

### 3. Copy Constructor
- Creates a new object as a copy of an existing object

```cpp
Fraction(const Fraction& other) {
    numerator = other.numerator;
    denominator = other.denominator;
}
```

---

## Constructor Process (Step by Step)

When you create an object like this:

```cpp
Fraction f1(3, 4);   // Using parameterized constructor
```

The following process happens:

1. **Memory Allocation**  
   Memory is allocated for the object on the stack (or heap if using `new`).

2. **Constructor Call**  
   The matching constructor is automatically called.

3. **Initialization of Members**  
   Data members (`numerator` and `denominator`) are initialized with the given values (or default values).

4. **Object is Ready**  
   After the constructor finishes, the object is fully constructed and ready to use.

---

## Example: Adding Constructors to Fraction Class

You can add these constructors inside the `Fraction` class (in `fraction.h`):

```cpp
public:
    // Default constructor
    Fraction() : numerator(0), denominator(1) {}

    // Parameterized constructor
    Fraction(int num, int den) : numerator(num), denominator(den == 0 ? 1 : den) {}

    // Copy constructor
    Fraction(const Fraction& other) : numerator(other.numerator), denominator(other.denominator) {}
```

---

## Why Constructors Are Important?

- Guarantee that objects start in a **valid state**
- Prevent garbage values in data members
- Make object creation clean and readable
- Support encapsulation and good OOP design

---

**Author:** Louis Rao  
**Repo:** Object-Oriented-programming  
**Topic:** Constructor Process in C++
