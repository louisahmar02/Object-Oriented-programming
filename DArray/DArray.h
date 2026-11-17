
#ifndef DARRAY_H
#define DARRAY_H

#include <iostream>
using namespace std;

class DArray
{
private:
    int* array;
    int size;
    int capacity;

public:
    DArray();
    ~DArray();
    void push_back(int);
    DArray& operator = (const DArray& rhs);
    friend ostream& operator<<(ostream& os, const DArray& rhs) ;

};

ostream& operator<<(ostream& os, const DArray& rhs) ;
#endif