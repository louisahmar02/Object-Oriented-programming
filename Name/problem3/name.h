#ifndef name_h
#define name_h

#include<iostream>
using namespace std;

class Name{
    private:
    char* firstName;
    char midName;
    char* lastName;
    int length(const char *str) const;
    void dynamicCopy(const char *src, char *& dest);
    public:
    const char* getFirstName() const;
    char getMidName() const;
    const char* getLastName() const;
    Name(const char*, char mid, const char* last);
    Name(const Name& rhs);
    ~Name();
    Name();

    Name& operator=(const Name& rhs);
    bool operator==(const Name& rhs) const;

};
istream& operator>>(istream& is, Name& rhs);
ostream& operator<<(ostream& os, const Name& rhs);
#endif
