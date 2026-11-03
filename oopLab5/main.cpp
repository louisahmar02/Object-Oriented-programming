#include "String.h"
#include<iostream>
using namespace std;

int main(){
    String str1{"Object"}, str2{"Oriented"}, str3(str1);
    str3 = String{"Programming"};

    if (str1 < str2) {
	cout << "str1" << " is lexicographically less than " << str2 << endl;
    }
    else {
	cout << "str2" << " is lexicographically less than or equal to"<< str1 << endl;
    }

    return 0;
} 

