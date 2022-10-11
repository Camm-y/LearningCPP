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
    cout << utilz::area(rectangle.length, rectangle.width) << endl;
    
    cout << utilz::pow(3,3) << endl;
    cout << utilz::pow(3) << endl;

}