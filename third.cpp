#include <iostream>
#include <fstream>
#include <vector>

using std::ofstream, std::vector, std::string;

int main() {

    // std::ofstream file;
    // file.open("hello.txt");

    ofstream file ("hello.txt", std::ios::app); //without the ios::app the file overwrites

    std::vector<string> names;
    names.push_back("Bob");
    names.push_back("Billy");
    names.push_back("Dickhead");

    for(string name : names){
        file << name << std::endl;
    }

    file.close();

}