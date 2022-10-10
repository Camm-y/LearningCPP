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


int main() 
{
    vector<int> data = {1,2,3};
    print_vector(data);
    change_vector(data);
    print_vector(data);
}