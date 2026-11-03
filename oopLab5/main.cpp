#include "String.h"
#include<iostream>
using namespace std;

int main(){
    String str1{"Object"}, str2{"Oriented"}, str3(str1);
    cout << str1  << "\t" << str2 << "\t" <<  str3 << endl;
    cout<<"Data: "<<str1;
    return 0;
} 
