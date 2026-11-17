#include <iostream>
#include "DArray.h"
using namespace std;
int main(){
    DArray darr1, darr2;			//darr1 & darr2 have size 0
    for (int j{}; j < 15; ++j){
    	darr1.push_back(j*2);
    }
    cout << darr1 << endl;
    darr2 = darr1;
    for (int j{15}; j >= 0; --j){
    	darr2.push_back(j*3);
    }
    cout << darr2 << endl;

    return 0;
} 