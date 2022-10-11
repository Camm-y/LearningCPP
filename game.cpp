#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using std::cout, std::cin, std::endl, std::string, std::vector;


void print_vector(vector<int> vec)
{
    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << '\t';
    }
    cout << "\n";
}

void play_game(){
    vector<int> guesses;
    int guess_count;
    int random = rand() % 251; //rand needs a pointer for max
    cout << random << endl;

    while(true){
        int guess;
        cin >> guess;
        guesses.push_back(guess);

        if(guess == random) {
            cout << "You win!\n\n";
            print_vector(guesses);
            break;
        } else if (guess < random) {
            cout << "Too low\n";
        } else {
            cout << "Too high\n";
        }
    }
}


int main()
{
    srand(time(NULL)); //random seed for the rand generator
    int choice;
    do
    {
        cout << "0. Quit" << endl << "1. Play" << endl;
        cin >> choice;

        switch(choice)
        {
        case 0:
            cout << "Bye" << endl;
            return 0;
        case 1:
            play_game();
            break;
        }
    } while (choice != 0);
    
    
}