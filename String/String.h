#ifndef String_h
#define String_h
#include<iostream>
using namespace std;

class String{
    private:
    char* data{};
    int len{};
    int Compare(const String& rhs) const;
    int length(const char*) const;
    void dynamicCopy(const char *src, char *&dest) const;
    // int length(const char *str) const;
    //void dynamicCopy(const char *src, char *& dest);
    public:
    String();
    ~String();
    String(const char*);
    String(const String& rhs);
    const char* getData() const;
    int getLength() const;
    void setData(const char*);
    // void setLength(const int);
    // void print() const;
    String stringConcat(const String& rhs) const;
    // void toUpperCase();
    // void toLowerCase();
    String& operator=(const String& rhs);
    String operator+(const String& rhs) const;
    String& operator+=(const String& rhs);
    bool operator==(const String& rhs) const;
    char& operator[](int);
    bool operator!=(const String& rhs) const;
    bool operator<(const String& rhs) const;
    bool operator>(const String& rhs) const;
    bool operator>=(const String& rhs) const;
    bool operator<=(const String& rhs) const;


};
istream& operator>>(istream& is, String& rhs);
ostream& operator<<(ostream& os, const String& rhs);
#endif
