#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::cin;
using std::string;
using std::endl;


void print_power(int x, int y);

void learn(){
    string sentence = "This is cock";
    for (int i = 0; i<sentence.size(); i++){
        if (sentence[i] == 'i') continue;
        cout << sentence[i] << endl;
    }
}

void do_while(){
    string guess;
    string password = "test";
    do{
        cout << "Password: ";
        cin >> guess;
    } while(guess != password);
}

void switches(){
    enum class Season{summer, spring, fall, winter};
    Season now = Season::winter;
    switch(now)
    {
        case Season::summer:
            break;
        case Season::spring:
            break;
        case Season::winter:
            cout << "It's winter hoe" << endl;
            break;
        case Season::fall:
            break;
    }
}

void operands(){
    //cpp operator procedence page shows LOTS of operands
    double x, y;
    x = 10;
    y = x = 100;
    cout << x << "\t" << y << endl;
    x = 10;
    (y = x) = 100;
    cout << x << "\t" << y << endl;
}

void hex_oct()
{
    int number = 0x30; //hex
    int number2 = 030; //octal
    int number3 = 30;
    cout << number << endl << number2 << endl << std::hex << number3;
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
