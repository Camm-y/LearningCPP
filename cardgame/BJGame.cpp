#include "BJGame.h"

using namespace std;


Deck BlackJack::getDeck()
{
    return this->deck;
}

void BlackJack::deal(int n)
{
    for (int i=0; i<n; i++)
    {
        for(Player p : players)
        {
            p.hit(this->deck.TopCard());
        }
    }
    
    
}

void BlackJack::menu()
{
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
            system("cls");
            break;
        }
    } while (choice != 0);

    do
    {
        cout << "0. SinglePlayer" << endl << "1. MultiPlayer" << endl;
        cin >> choice;

        switch(choice)
        {
        case 0:
            cout << "SinglePlayer Mode" << endl;
            single_game();
            break;
        case 1:
            cout << "SinglePlayer Mode" << endl;
            multi_game();
            break;
        }
    } while (choice != 0);
}

void BlackJack::single_game()
{
    Player player;
    Player house;
    this->deck.Shuffle(3);
    deal(2);
    
}


