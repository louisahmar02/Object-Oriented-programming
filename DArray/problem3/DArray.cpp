#include <iostream>
using namespace std;
#include "DArray.h"

DArray::DArray(){
    cap = 0;
    a_size = 0;
    array = nullptr;
}

DArray::~DArray(){
    delete[] array;
}

void DArray::push_back(int value){

    if (a_size == cap)
    {
        if (cap==0)
            cap =1;
        else
            cap *= 2;
        
        int *temp = new int[cap];
        for (int i = 0; i < a_size; i++)
        {
            temp[i] = array[i];
        }
        delete[] array;
        array = temp;
    }

    array[a_size] = value;
    a_size++;
}


ostream& operator<<(ostream& os, const DArray& rhs){
    for (int i = 0; i < rhs.a_size; i++)
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

        if (rhs.cap == 0)
            temp = nullptr;
        else
            temp = new int[rhs.cap];

        for (int i = 0; i < rhs.a_size; i++)
        {
            temp[i] = rhs.array[i];
        }

        delete[] array;

        array = temp;
        a_size = rhs.a_size;
        cap = rhs.cap;
    }

    return *this;
}
int DArray::size(){
    return a_size;
}

int DArray::capacity(){
    return cap;
}

DArray::DArray(const DArray& rhs)
{
    a_size = rhs.a_size;
    cap = rhs.cap;
    if (cap == 0){
        array = nullptr;
    }
    else{
        array = new int[cap];
    }
    for (int i = 0; i < a_size; i++)
    {
        array[i] = rhs.array[i];
    }
}


bool DArray::operator==(const DArray& rhs) const
{
    if (a_size != rhs.a_size){
        return false;
    }

    for (int i {}; i < a_size; i++)
    {
        if (array[i] != rhs.array[i]){
            return false;
        }

    }

    return true;
}
const int& DArray::operator[](int index) const
{
    return array[index];
}

int &DArray::operator[](int index){
    return array[index];
}
