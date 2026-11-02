
#include "String.h"
#include<iostream>
using namespace std;

int String::length(const char* src) const
{
    int len{};

    if (src)
    {
        for (; src[len] != '\0'; len++);
    }

    return len;
}
void String::dynamicCopy(const char* src, char*& dest) const
{
    int len = length(src);

    dest = new char[len + 1];

    for (int i = 0; i < len; i++)
        dest[i] = src[i];

    dest[len] = '\0';
}

String::String()
{
    data = new char[1];
    data[0] = '\0';
    len = 0;
}

// Parameterized constructor
String::String(const char* str)
{
    len = length(str);
    dynamicCopy(str, data);
}

// Copy constructor
String::String(const String& rhs)
{
    len = rhs.len;
    dynamicCopy(rhs.data, data);
}

// Destructor
String::~String()
{
    delete[] data;
}

// Getter: data
const char* String::getData() const
{
    return data;
}

// Getter: length
int String::getLength() const
{
    return len;
}

// Setter: data
void String::setData(const char* str)
{
    char* temp;
    dynamicCopy(str, temp);

    delete[] data;

    data = temp;
    len = length(str);
}

// Compares two strings
int String::Compare(const String& rhs) const
{
    int i{};

    while (data[i] != '\0' && rhs.data[i] != '\0')
    {
        if (data[i] < rhs.data[i])
            return -1;

        if (data[i] > rhs.data[i])
            return 1;

        i++;
    }

    if (data[i] == '\0' && rhs.data[i] == '\0')
        return 0;

    if (data[i] == '\0')
        return -1;

    return 1;
}

// String concatenation
String String::stringConcat(const String& rhs) const
{
    return *this + rhs;
}

// Assignment operator
String& String::operator=(const String& rhs)
{
    if (this != &rhs)
    {
        char* temp;
        dynamicCopy(rhs.data, temp);

        delete[] data;

        data = temp;
        len = rhs.len;
    }

    return *this;
}

// Addition operator
String String::operator+(const String& rhs) const
{
    String result;

    delete[] result.data;

    result.len = len + rhs.len;
    result.data = new char[result.len + 1];

    int i{};

    for (; i < len; i++)
        result.data[i] = data[i];

    for (int j = 0; j < rhs.len; j++, i++)
        result.data[i] = rhs.data[j];

    result.data[i] = '\0';

    return result;
}

// Addition assignment operator
String& String::operator+=(const String& rhs)
{
    int newLength = len + rhs.len;
    char* temp = new char[newLength + 1];

    int i{};

    for (; i < len; i++)
        temp[i] = data[i];

    for (int j = 0; j < rhs.len; j++, i++)
        temp[i] = rhs.data[j];

    temp[i] = '\0';

    delete[] data;

    data = temp;
    len = newLength;

    return *this;
}

// Subscript operator
char& String::operator[](int index)
{
    return data[index];
}

// Equality operator
bool String::operator==(const String& rhs) const
{
    return Compare(rhs) == 0;
}

// Inequality operator
bool String::operator!=(const String& rhs) const
{
    return Compare(rhs) != 0;
}

// Less than operator
bool String::operator<(const String& rhs) const
{
    return Compare(rhs) < 0;
}

// Greater than operator
bool String::operator>(const String& rhs) const
{
    return Compare(rhs) > 0;
}

// Greater than or equal operator
bool String::operator>=(const String& rhs) const
{
    return Compare(rhs) >= 0;
}

// Less than or equal operator
bool String::operator<=(const String& rhs) const
{
    return Compare(rhs) <= 0;
}

// Input operator
istream& operator>>(istream& is, String& rhs)
{
    char temp[1000];

    is.width(1000);

    if (is >> temp)
        rhs.setData(temp);

    return is;
}

// Output operator
ostream& operator<<(ostream& os, const String& rhs)
{
    os << rhs.getData();

    return os;
}
