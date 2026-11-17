#include <iostream>
using namespace std;
#include "DArray.h"

DArray::DArray(){
    capacity = 0;
    size = 0;
    array = nullptr;
}

DArray::~DArray(){
    delete[] array;
}

void DArray::push_back(int value){

    if (size == capacity)
    {
        int temp_cap{};

        if (capacity==0)
            temp_cap=1;
        else
            temp_cap = capacity * 2;

        int *temp = new int[temp_cap];

        for (int i = 0; i < size; i++)
        {
            temp[i] = array[i];
        }

        delete[] array;

        array = temp;
        capacity = temp_cap;
    }

    array[size] = value;
    size++;
}

ostream& operator<<(ostream& os, const DArray& rhs){
    for (int i = 0; i < rhs.size; i++)
    {
        os << rhs.array[i] << " ";
    }
    return os;
}

DArray& DArray::operator=(const DArray& rhs)
{
    if (this != &rhs)
    {
        int* temp;

        if (rhs.capacity == 0)
            temp = nullptr;
        else
            temp = new int[rhs.capacity];

        for (int i = 0; i < rhs.size; i++)
        {
            temp[i] = rhs.array[i];
        }

        delete[] array;

        array = temp;
        size = rhs.size;
        capacity = rhs.capacity;
    }

    return *this;
}
