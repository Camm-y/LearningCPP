#ifndef MATH_UTILS
#define MATH_UTILS

//custom type
struct Rectangle
{
    double length;
    double width;
};

namespace utilz
{
    double area(double length, double width);
    //overload 1
    double area(double length);

    // overload 2
    double area(Rectangle rectangle);

    // default arguments! OP
    double pow(double base, int pow = 2);
}


#endif