#ifndef String_h
#define String_h
#include<iostream>
using namespace std;
class String{
private:
char* data{};
int len{};
void dynamicCopy(const char*, char *& des) const;
int length(const char*) const;
int Compare(const String& rhs) const;
public:
String(const char*);
String(const String& rhs);
~String();
const char* getData() const;
bool operator<(const String& rhs)const;

};

ostream& operator<<(ostream& os, const String& rhs);
#endif
