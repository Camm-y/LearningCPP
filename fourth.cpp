#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


void multi_arrays()
{
    vector<vector<int>> grades = {{1, 2, 3},{3, 4, 3},{5, 6, 3}};
    //int grades [][3] = {{1, 2, 3},{3, 4, 3},{5, 6, 3}};

    for(int r = 0; r < grades.size(); r++)
    {
        for(int c = 0; c < grades[r].size(); c++)
        {
            cout << grades[r][c] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    
}