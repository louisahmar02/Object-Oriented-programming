#include<iostream>
#include "name.h"
using namespace std;
int Name::length(const char* src) const
{
    int len{};
    if (src){
        for (; src[len] != '\0'; len++);
    }
    return len;
}
void Name::dynamicCopy(const char* src, char*& des)
{
    int len = length(src);

    des = new char[len + 1];

    for (int i = 0; i <= len; i++)
        des[i] = src[i];
}
Name::Name() : Name("", '\0', ""){}
Name::Name(const char* first, char mid, const char* last)
{
    dynamicCopy(first, firstName);
    midName = mid;
    dynamicCopy(last, lastName);
}
const char* Name::getFirstName() const
{
    return firstName;
}
char Name::getMidName() const
{
    return midName;
}
const char* Name::getLastName() const
{
    return lastName;
}
Name::Name(const Name& rhs)
{
    dynamicCopy(rhs.firstName, firstName);
    midName = rhs.midName;
    dynamicCopy(rhs.lastName, lastName);
}
Name::~Name(){

    delete[] firstName;
    delete[] lastName;
}
Name& Name::operator=(const Name& rhs)
{
    if (this != &rhs)
    {
        delete[] firstName;
        delete[] lastName;

        dynamicCopy(rhs.firstName, firstName);
        midName = rhs.midName;
        dynamicCopy(rhs.lastName, lastName);
    }

    return *this;
}
ostream& operator<<(ostream& os, const Name& rhs){
    os << rhs.getFirstName() << " "<< rhs.getMidName() << " " << rhs.getLastName();

    return os;
}


// void Name::setFirstName(char* first) {
//     if (first != nullptr) {
//         firstName = first;
//     }
// }


// istream& operator>>(istream& is, Name& rhs){
//     is >> rhs.getfirstName >> rhs.setMidName >> rhs.setLastName;
// }

istream& operator>>(istream& is, Name& rhs)
{
    char first[100];
    char mid;
    char last[100];

    is >> first >> mid >> last;

    rhs = Name(first, mid, last);

    return is;
}
bool Name::operator==(const Name& rhs) const
{
    int i = 0;

    while (firstName[i] != '\0' && rhs.firstName[i] != '\0')
    {
        if (firstName[i] != rhs.firstName[i])
            return false;
        i++;
    }

    if (firstName[i] != rhs.firstName[i])
        return false;

    if (midName != rhs.midName)
        return false;

    i = 0;

    while (lastName[i] != '\0' && rhs.lastName[i] != '\0')
    {
        if (lastName[i] != rhs.lastName[i])
            return false;
        i++;
    }

    return lastName[i] == rhs.lastName[i];
}

