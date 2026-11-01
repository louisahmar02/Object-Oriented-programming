#include <iostream>
#include "Name.h"
using namespace std;

// ========== EXTRA FUNCTIONS (commented) ==========
// These are extra helper functions added for demonstration purposes.

/*
// Extra helper function: Print a separator line
void printSeparator() {
    cout << "----------------------------------------" << endl;
}

// Extra helper function: Display full name details
void displayNameDetails(const Name& n) {
    cout << "Full Name : " << n << endl;
    cout << "First Name: " << n.getFirstName() << endl;
    cout << "Mid Name  : " << n.getMidName() << endl;
    cout << "Last Name : " << n.getLastName() << endl;
}

// Extra helper function: Compare two names and print result
void compareNames(const Name& n1, const Name& n2) {
    if (n1 == n2) {
        cout << "Both names are equal." << endl;
    } else {
        cout << "Names are different." << endl;
    }
}
*/
// ========== END OF EXTRA FUNCTIONS ==========

int main() {
    cout << "===== Name Class Demonstration =====" << endl << endl;

    // Create names using different constructors
    Name person1("Louis", 'A', "Rao");
    Name person2("John", 'B', "Smith");
    Name person3;                      // Default constructor
    Name person4 = person1;            // Copy constructor

    // printSeparator();
    cout << "Person 1 details:" << endl;
    // displayNameDetails(person1);
    cout << person1 << endl;

    // printSeparator();
    cout << "Person 2 details:" << endl;
    // displayNameDetails(person2);
    cout << person2 << endl;

    // printSeparator();
    cout << "Person 3 (default):" << endl;
    // displayNameDetails(person3);
    cout << person3 << endl;

    // printSeparator();
    cout << "Person 4 (copy of Person 1):" << endl;
    // displayNameDetails(person4);
    cout << person4 << endl;

    // printSeparator();
    cout << "Comparing Person 1 and Person 4:" << endl;
    // compareNames(person1, person4);
    if (person1 == person4)
        cout << "Both names are equal." << endl;
    else
        cout << "Names are different." << endl;

    // printSeparator();
    cout << "Comparing Person 1 and Person 2:" << endl;
    // compareNames(person1, person2);
    if (person1 == person2)
        cout << "Both names are equal." << endl;
    else
        cout << "Names are different." << endl;

    // printSeparator();
    cout << "Assignment operator test:" << endl;
    person3 = person2;
    // displayNameDetails(person3);
    cout << person3 << endl;

    // printSeparator();
    cout << "Program finished successfully." << endl;

    return 0;
}
