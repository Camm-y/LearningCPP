#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;


void print_power(int x, int y);


int main()
{
    // int x, y;
    // cout << "Base: ";
    // cin >> x;
    // cout << "Exp: ";
    // cin >> y;
    // print_power(x, y);
    string greeting = "Hello";
    greeting.insert(3, "");
    greeting.erase(4);
    cout << greeting << std::endl;

    string test;
    cout << "Test multi: ";
    getline(cin, test);
    cout << "test: " + test << std::endl;
    
}

void print_power(int x, int y) 
{
    int base = 1;
    for(int i = 0; i < y; i++) {
        base = base * x;
    }
    cout << x << " to the power of " << y << " is " << base;
}

