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
   
   Name name3{};
   cin >> name3;
   cout << name3 << endl;

   if (name1 == name3)
	cout << name1 << "is equal to " << name3 << endl;
   else 
	cout << name1 << "is not equal to " << name3 << endl;

  
    return 0;
}
