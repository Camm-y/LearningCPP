#include <string>
#include <iostream>

using namespace std;

class Dog {
    int age;
    string name;
    public:
        Dog() {age = 3; name = "dummy";}

        // const reference and overloaded nonconst function
        void setAge(const int& a) {age = a;}
        void setAge(int& a) {age = a;}

        // return by reference to improve efficiency of program
        // const so the caller cannot change the field
        const string& getName() {return name;}

        // const function - cannot call another function inside unless it's const too
        void printDogName() const { cout << name << " const" << endl;}
        // this can be overloaded
        void printDogName() { cout << name << " non-const" << endl;}
};

int main() {
    Dog d;

    int i=9;
    d.setAge(i);
    cout << i << endl;

    const string& n = d.getName();
    cout << n << endl;

    d.printDogName();

    // when the dog is set const - will call the const print name func
    const Dog e;
    e.printDogName();

    const int age1 = 12;
    //e.setAge(age1); can't call because dog is const and there's no overloaded const func
    d.setAge(age1); //will call the func with the const argument
    
}

// const reference passed in parameter
// reference means don't have to copy it by value
// const parameter without reference can't be overloaded