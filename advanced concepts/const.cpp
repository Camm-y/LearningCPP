#include <iostream>

int main()
{

    const int i=9;
    //i=6 wont work at compile time

    const int *p1 = &i; //data is not const, but the point is const
    //*p1 = 6 wont work
    p1++; //works fine
    //int* const p2; //opposite of p1 -> must be initialised
    //pointer is a const, data pointed to is not a const
    const int p3 = 2;
    //const int* const p3 = 4;

    //int const *p4 = &i;
    const int *p4 = &i;

    //If const is on the left of *, data is const
    //If const is on the right of *, pointer is const


    const_cast<int&>(i) = 6; //cast away the const of i

    int j;
    static_cast<const int&>(j); // cast data into a const
    //eg cannot do = 8 at the end of line 27
    

}