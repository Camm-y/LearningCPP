# Notes

## Control flow
### -> branching
- if, switch
### -> looping
- while, for, do-while

if(expression){
    code;
} 
else if(expression2)
{
    code;
}
else
{
    code;
}

switch case is exactly like Java except can only switch integrals


## IO Stream
### -> files
- ifstream -> input & ofstream -> output
input >> var
output << var

# Func types


## Class
- Class defines an object
- Creates a new object each time it's made
- eg 'User' class and 'user' object
### -> function
- 
### -> method
- OO
- Does something attached to an object
- eg user.speak();
### -> static method
- OO
- Does something attached to an class
- eg User.count();
### -> constructor
- OO
- Called to instantiate a class
- Returns object of class.type

### -> destructor
- Used to safely remove objects from memory


## Function Overloading
### -> having 2 versions of the same function name
- depends on the parameters used (or not used)
void do_this(int x);
void do_this(string x);
works
### -> However 
- default arguments are a much better option


## Multi-file compilation
### -> types:
- header file (x.h)
- implementation file (x.cpp)
- main file (required for .exe)
Both need to include the header file
--
#ifndef CUSTOM_H (if not defined)
#define CUSTOM_H

### -> How to compile:
- g++ file1.cpp file2.cpp -o name
### - > Hidden compile:
- If you want to distribute libraries but have code hidden (compiled)
Can use -c during compilation to create a .o file (object)

## Make Files
### -> Automate build process
- Only recompile files changed

# Advanced Area
## Why use const
- Guards against inadvertent write to the variable
- Self documenting
- Enables compiler to do more optimization, making code tighter
- const means the variable can be put in ROM

## Compiler
### Compiler silently writes 4 functions if they are not explicitly declared:
- Copy constructor
- Copy assignment operator
- Destructor
- Default constructor (only if there is no contrustor declared)

## Summary of disallowing functions
- C++ 11: f() = delete;
- C++ 3: Declare the function to be private, and not define it
- Private destructor stay out of stack








