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
        system("cls");
        cout << "0. Quit" << endl << "1. Play" << endl;
        cin >> choice;

        switch(choice)
        {
        case 0:
            cout << "Bye" << endl;
            system("cls");
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
    players.push_back(player);
    this->deck.Shuffle(3);
    deal(2);
    play();  
}

void BlackJack::play()
{
    gameOver = false;
    /*
        Iterate over the players excluding the house and ask for their bet.
        - if 0 they do not play the round
        - if the bet exceeds the player balance they do not play the round
    */
    for(int i = 0; i < players.size()-1; i++)
        {
            system("cls");
            double bet;
            cout << "Player " << i << "'s" << " Turn" << endl;
            cout << "Bet (0 to pass):" << endl;
            cin >> bet;
            if (bet != 0 && bet < players[i].getBalance())
            {
                cout << "Player " << i << " Bets " << "$" << bet << endl;
                bets.push_back(bet);
                players[i].setState(true);
            } else
            {
                cout << "Player " << i << " Passes this round." << endl;
                players[i].setState(false);
            }
            
        }
    /*
        Play the round until a winner is found
    */
    while (gameOver == false)
    {
        int choice;
        /*
            Players turn to play
            - Player can choose to hit (gain a new card)
            - Player can choose to fold (use only their current hand)
        */
        for(int i = 0; i < players.size()-1; i++)
        {
            if(players[i].getState())
            {
                while(choice != 0)
                {
                    cout << "Player " << i << "'s" << " Turn" << endl;
                    cout << "0. Hit" << endl << "1. Fold" << endl;
                    cin >> choice; 
                    if(choice == 0)
                    {
                        cout << "Hitting Player " << i << endl;
                        players[i].hit(this->deck.TopCard());
                        players[i].updateScore();
                        this->deck.Discard();
                        
                    }
                    else if (choice == 1)
                    {
                        cout << "Player " << i << " folds" << endl;
                        players[i].setState(false);
                    }
                }
            }            
        }
        /* 
            Houses turn to play
            - house will hit on total<17 or fold on total>17
        */
        if(house.getScore() < 17)
        {
            cout << "The House chooses to hit." << endl;
            house.hit(this->deck.TopCard());
            house.updateScore();
            this->deck.Discard();
        } else
        {
            cout << "The house chooses to fold." << endl;
            house.setState(false);
        }

        /*
            End of turn logic 
        */
    }
}


