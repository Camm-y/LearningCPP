#include <iostream>
#include <vector>

using std::vector, std::cout, std::endl;


void print_vector(vector<int> data) 
{
    cout << endl;
    for(int i = 0; i < data.size(); i++){
        cout << data[i] << "\t";
    }
    data.push_back(12); //doesnt save passed by ref
}

void change_vector(vector<int> &data)
{
    data.push_back(12); //saves because passing value
}

void iterating(){
    int data[] = {1,2,3,4,5};
    for(int n : data)
    {
        cout << n << "\t";
    }
}

int main() 
{
    
}