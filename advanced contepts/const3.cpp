#include <string>
#include <iostream>
#include <vector>

using namespace std;

// not using mutable
class BigArrayOld
{

    vector<int> v; // huge vector
    int accessCounter;

public:
    // int getItem(int index) const 
    // {
    //     accessCounter++;
    //     return v[index];
    // }

    /* 
    The above function wont compile because if the
     functions makes changes to any of the member variables
     it can't be a const func 

     Solution is to make accessCounter mutable
     Or to cast it away:
     */
    int getItem(int index) const 
    {
        const_cast<BigArrayOld*>(this)->accessCounter++;
        return v[index];
    }

};

// using mutable
class BigArray
{

    vector<int> v; // huge vector
    mutable int accessCounter;
    int* v2; // another int array

public:
     int getItem(int index) const 
     {
         accessCounter++;
         return v[index];
     }
    // has maintained bitwise consts
     void setV2Item(int index, int x) const
     {
        *(v2+index) = x;
     }

     const int*const fun(const int*const& p)const;
};


int main()
{
    BigArray b;
}