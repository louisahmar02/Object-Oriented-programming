#include "String.h"
#include<iostream>
using namespace std;

String::~String(){
    delete[] data;
}
String::String(const char* str){
    len = length(str);
    dynamicCopy(str,data);
}
String::String(const String& rhs){
    len = rhs.len;
    dynamicCopy(rhs.data, data);
}
const char* String::getData() const{
    return data;
}
int String::Compare(const String& rhs)const{
    int i{};
    if(this && rhs.data){
        while (data[i] != '\0' && rhs.data[i] != '\0'){
            if (data[i] < rhs.data[i])
            return -1;

        if (data[i] > rhs.data[i])
            return 1;

        i++;
        }
        if(data[i] == '\0' && rhs.data[i] == '\0'){
            return 0;
        }
        if(data[i]=='\0'){
            return -1;
        }

        return 1;
    }
    }

void String::dynamicCopy(const char* str, char*& des) const
{
    int slen = length(str);

    des = new char[slen + 1];

    for (int i = 0; i < slen; i++)
        des[i] = str[i];

    des[slen] = '\0';
}
int String::length(const char* str) const
{
    int slen{};

    if (str)
    {
        for (; str[slen] != '\0'; slen++);
    }

    return slen;
}
ostream& operator<<(ostream& os, const String& rhs)
{
    os << rhs.getData();

    return os;
}

bool String::operator<(const String& rhs) const{
    return Compare(rhs)< 0? true: false;
}
