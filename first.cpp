#include <iostream>
using std::cout;
using std::cin;



void print_power(int x, int y);


int main(){
    int x, y;
    cout << "Base: ";
    cin >> x;
    cout << "Exp: ";
    cin >> y;
    print_power(x, y);
}

void print_power(int x, int y) {
    int base = 1;
    for(int i = 0; i < y; i++) {
        base = base * x;
    }
    cout << x << " to the power of " << y << " is " << base;
}

