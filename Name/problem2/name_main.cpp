#include<iostream>
#include "name.h"
using namespace std;
void print(Name _name){
		cout << "Inside doSomething " << _name << endl;
	}

int main(){
    Name name1("object", 'O', "programming");
    cout << name1 << endl;		//It prints Object O. Programming
    print(name1);
        cout << name1 << endl;
    {
 	Name name2{};
	name2 = name1;
	cout << name2 << endl;
   }
  
    return 0;
}
