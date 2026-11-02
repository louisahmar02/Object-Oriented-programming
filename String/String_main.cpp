
#include "String.h"
#include <iostream>
using namespace std;

int main()
{
    String s1("Hello");
    String s2("World");

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;

    String s3(s1);
    cout << "Copy: " << s3 << endl;

    String s4 = s1 + s2;
    cout << "Addition: " << s4 << endl;

    s1 += s2;
    cout << "Addition assignment: " << s1 << endl;

    cout << "Length: " << s1.getLength() << endl;

    s1[0] = 'Y';
    cout << "After modification: " << s1 << endl;

    cout << "Equality: " << (s1 == s2) << endl;
    cout << "Comparison: " << (s1 > s2) << endl;

    s3 = s2;
    cout << "Assignment: " << s3 << endl;

    return 0;
}
