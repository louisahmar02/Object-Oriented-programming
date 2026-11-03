#include "String.h"
#include<iostream>
using namespace std;

int main(){
    String str1("Object"), str2{"Oriented"}, str3(str1);
    cout << str1  << "\t" << str2 << "\t" <<  str3 << endl;

    str3 = str1 + str2 + "Programming"; 	// + denotes string concatenation
    cout << str1  << "\t" << str2 << "\t" <<  str3 << endl;

    return 0;
} 
