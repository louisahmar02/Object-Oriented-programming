#include<iostream>
#include "name.h"
using namespace std;

Name::Name(const char* first, char mid, const char* last)
{
    int i = 0;
    while (first[i] != '\0')
        i++;

    firstName = new char[i + 1];

    for (int j = 0; j <= i; j++)
        firstName[j] = first[j];

    midName = mid;

    i = 0;
    while (last[i] != '\0')
        i++;

    lastName = new char[i + 1];

    for (int j = 0; j <= i; j++)
        lastName[j] = last[j];
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
    int i = 0;

    while (rhs.firstName[i] != '\0')
        i++;

    firstName = new char[i + 1];

    for (int j = 0; j <= i; j++)
        firstName[j] = rhs.firstName[j];

    midName = rhs.midName;

    i = 0;

    while (rhs.lastName[i] != '\0')
        i++;

    lastName = new char[i + 1];

    for (int j = 0; j <= i; j++)
        lastName[j] = rhs.lastName[j];
}
Name::~Name(){

    delete firstName;
    delete lastName;
}

ostream& operator<<(ostream& os, const Name& rhs){
    os << rhs.getFirstName() << " "<< rhs.getMidName() << " " << rhs.getLastName();

    return os;
}

Name& Name::operator=(const Name& rhs){
    
}
