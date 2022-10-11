#include <iostream>
#include <fstream>
#include <vector>
#include "math_utils.h"

using namespace std;

namespace uzilt
{
    double area(double length, double width) //rectangle
    {
        return length * width;
    }
    //overload 1
    double area(double length) //square
    {
        return length * length;
    }

    // overload 2
    double area(Rectangle rectangle)
    {
        return rectangle.length * rectangle.width;
    }

    // default arguments! OP
    double pow(double base, int pow){
        
        int total = 1;
        for(int i = 0; i<pow; i++)
        {
            total *= base;
        }
        return total;
    }
}
