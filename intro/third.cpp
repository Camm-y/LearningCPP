#include <iostream>
#include <fstream>
#include <vector>

using std::ofstream, std::vector, std::string;


void read_from_better(string filename)
{
    std::ifstream file (filename);
    string line;
    std::getline(file, line);
    std::cout << line << std::endl;
}

void read_from(string filename){
    std::ifstream file (filename);
    vector<string> names;

    string input;
    while(file >> input)
    {
        names.push_back(input);
    }
    for(string name : names){
        std::cout << name << std::endl;
    }
}

void write_to(string filename){
    // std::ofstream file;
    // file.open("hello.txt");
    ofstream file (filename, std::ios::app); //without the ios::app the file overwrites

    std::vector<string> names;
    names.push_back("Bob");
    names.push_back("Billy");
    names.push_back("Dickhead");

    for(string name : names){
        file << name << std::endl;
    }

    file.close();
}


int main() {

    read_from_better("hello.txt");

}