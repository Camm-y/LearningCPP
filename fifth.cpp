#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


//custom type
struct Rectangle
{
    double length;
    double width;
};

double area(double length, double width)
{
    return length * width;
}
 //overload 1
double area(double length)
{
    return length * length;
}

// overload 2
double area(Rectangle rectangle)
{
    return rectangle.length * rectangle.width;
}

int main()
{
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;
    cout << area(rectangle.length, rectangle.width);
    
}