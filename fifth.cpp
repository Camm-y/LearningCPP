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
double pow(double base, int pow = 2)
{
    int total = 1;
    for(int i = 0; i<pow; i++)
    {
        total *= base;
    }
    return total;
}

int main()
{
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;
    cout << area(rectangle.length, rectangle.width) << endl;
    
    cout << pow(3,3) << endl;
    cout << pow(3) << endl;

}