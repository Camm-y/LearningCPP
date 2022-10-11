#include <iostream>
#include <fstream>
#include <vector>


using std::cout, std::endl, std::string;


template <typename T>
void swap(T &x, T &y)
{
    T temp = y;
    y = x;
    x = temp;
}


int main()
{
    int x = 5; 
    int y = 8;
    swap(x, y);
    cout << x << endl << y << endl;

    string yes = "yes";
    string no = "no";
    swap(yes, no);
    cout << yes << endl << no << endl;

    
}