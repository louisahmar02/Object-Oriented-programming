
#ifndef DARRAY_H
#define DARRAY_H

#include <iostream>
using namespace std;

class DArray
{
private:
    int* array{};
    int a_size{};
    int cap{};

public:
    DArray();
    ~DArray();
    void push_back(int);
    DArray& operator = (const DArray& rhs);
    friend ostream& operator<<(ostream& os, const DArray& rhs) ;
    int size();
    int capacity();
    int& operator[](int index);
    DArray(const DArray& rhs);





};

#endif