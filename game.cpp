#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;


void highscore(int count){
    ifstream input("highscore.txt");
    if (!input.is_open()){
        "Unable to open highscores";
        return;
    }
    int highscore;
    input >> highscore;
    ofstream output("highscore.txt");
    if (!output.is_open()){
        "Unable to write to highscores";
        return;
    }
    if (count < highscore){
        output << count;
    } else {
        output << highscore;
    }
}

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
        guess_count++;
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
    highscore(guess_count);
}

void menu()
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
            break;
        case 1:
            play_game();
            break;
        }
    } while (choice != 0);
}


int main()
{
    menu();
    
    
}