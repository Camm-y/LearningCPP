#include <iostream>
#include <fstream>
#include <vector>
#include "math_utils.h"

using namespace std;



int main()
{
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;
    cout << area(rectangle.length, rectangle.width) << endl;
    
    cout << pow(3,3) << endl;
    cout << pow(3) << endl;

}