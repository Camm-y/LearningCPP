#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::cin;
using std::string;
using std::endl;


void print_power(int x, int y);

void learn()
{
    
}

void literals()
{
    auto x = -5U;
    auto y = 5.0F;
    // cant do this -> x = "string";
    cout << x << endl << y;
}

void string_operations() {
    string greet = "What the fuck";
    greet.replace(greet.find("fuck"), 4, "****");
    cout << greet << endl;

    cout << greet.substr(5,2) << endl;

    cout << greet.find_first_of("ae") << endl;

    if(greet.find_first_of("!") == -1) cout << "NO !" << endl;

    if(greet.compare("What the ****") == 0) cout << "poopy" << endl;
}


void string_modifer(){
    string greet = "Hello";
    cout << greet.size() << endl;
    greet += " there";
    cout << greet << endl;

    string greeting = "Hello";
    greeting.insert(3, "");
    greeting.erase(4);
    cout << greeting << std::endl;
}


void numeric_functions()
{
    cout << NAN << endl;
    cout << remainder(13,4.2) << endl;
    cout << 10%3 << endl;
}


void print_from_in() 
{
    string test;
    cout << "Test multi: ";
    getline(cin, test);
    cout << "test: " + test << std::endl;
}


void print_power(int x, int y) 
{
    cout << "Base: ";
    cin >> x;
    cout << "Exp: ";
    cin >> y;
    print_power(x, y);
    int base = 1;
    for(int i = 0; i < y; i++) {
        base = base * x;
    }
    cout << x << " to the power of " << y << " is " << base;
}

int main()
{
    learn();
}
