#include "BJGame.h"
#include <stdlib.h>

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
            exit(0);
            break;
        case 1:
            system("cls");
            choice = 0;
            break;
        }
    } while (choice != 0);
    int choice2;
    do
    {
        cout << "0. SinglePlayer" << endl << "1. MultiPlayer" << endl;
        cin >> choice2;

        switch(choice2)
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
    } while (choice2 != 0);
}

void BlackJack::multi_game()
{

}

void BlackJack::single_game()
{
    Player player;
    Player house;
    players.push_back(house);
    players.push_back(player);
    this->deck.Shuffle(3);
    deal(2);
    play();  
}

void BlackJack::play()
{
    gameOver = false;
    for(int i = 0; i < players.size()-1; i++)
        {
            double bet;
            cout << "Player " << i << "'s" << " Turn" << endl;
            cout << "Bet: " << endl;
            cin >> bet;
            bets.push_back(bet);
        }
    while (gameOver == false)
    {
        int choice;
        for(int i = 0; i < players.size()-1; i++)
        {
            while(choice != 0)
            cout << "Player " << i << "'s" << " Turn" << endl;
            cout << "0. Hit" << endl << "1. Fold" << endl;
            cin >> choice; 
            if(choice == 0)
            {
                players[i].hit(this->deck.TopCard());
            } else if (choice == 1)
            {
                players[i].fold();
            }
        }
    }
}


