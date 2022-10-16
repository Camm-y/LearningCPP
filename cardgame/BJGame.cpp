#include "BJGame.h"
#include <stdlib.h>
#include <windows.h>

using namespace std;

ostream& operator << (ostream& output, Card* card)
{
    card->Print();
    return output;
}

Deck BlackJack::getDeck()
{
    return deck;
}

void BlackJack::deal(int n)
{
    for (int i=0; i<n; i++)
    {
        for(Player* p : players)
        {
            p->hit(deck.TopCard());
            deck.Discard();
        }
        house.hit(deck.TopCard());
        deck.Discard();
    } 
}

void BlackJack::printGame()
{
    Sleep(1000);
    system("cls");
    std::vector<Card*> houseHand = house.getHand();
    Card* h1 = houseHand.front();
    Card* h2 = houseHand.back();
    if (!playersOver)
    {
        cout << "House\t -- " << "Cards: " << h1 << " ??" << endl << endl;
    } else
    {
        cout << "House\t- " << "Cards: " << h1 << " " <<  h2 << endl << endl;
    }
    for(int i = 0; i < players.size(); i++)
    {
        cout << "Player " << i+1 << " -- " << "Cards: ";
        for(Card* c : players[i]->getHand())
        {
            c->Print();
            cout << " ";
        }
        cout << endl << endl;
    }
    cout << endl;
}

void BlackJack::play()
{
    gameOver = false;
    playersOver = false;
    /*
        Iterate over the players excluding the house and ask for their bet.
        - if 0 they do not play the round
        - if the bet exceeds the player balance they do not play the round
    */
    for(int i = 0; i < players.size(); i++)
    {
        system("cls");
        double bet;
        cout << "Player " << i+1 << "'s" << " Turn" << endl;
        cout << "Bet (0 to pass):" << endl;
        cin >> bet;
        if (bet != 0 && bet < players[i]->getBalance())
        {
            cout << "Player " << i+1 << " Bets " << "$" << bet << endl;
            bets.push_back(bet);
            players[i]->setState(true);
        } else
        {
            cout << "Player " << i+1 << " Passes this round." << endl;
            players[i]->setState(false);
        }
    }
    /*
        Play the round until a winner is found
    */
    while (!gameOver)
    {
        int choice;
        /*
            Players turn to play
            - Player can choose to hit (gain a new card)
            - Player can choose to fold (use only their current hand)
        */
        for(int i = 0; i < players.size(); i++)
        {  
            printGame();
            if(players[i]->getState())
            {
                cout << players[i]->getScore() << endl;
                if(players[i]->getScore() < 21)
                {
                    while(players[i]->getState())
                    {
                        cout << "Player " << i+1 << "'s" << " Turn" << endl;
                        cout << "0. Fold" << endl << "1. Hit" << endl;
                        cin >> choice; 
                        if(choice == 1)
                        {
                            cout << "Hitting Player " << i+1 << endl;
                            players[i]->hit(deck.TopCard());
                            deck.Discard();
                            printGame();
                        }
                        else if (choice == 0)
                        {
                            cout << "Player " << i+1 << " stays" << endl;
                            players[i]->setState(false);
                            printGame();
                        }
                    }
                } else if (players[i]->getScore() == 21)
                {
                    players[i]->pay(bets[i]*2);
                    players[i]->setState(false);
                    printGame();
                    cout << "Player " << i+1 << " scores BlackJack!" << endl;   
                } else {
                    house.pay(bets[i]);
                    printGame();
                    cout << "Player " << i+1 << " has bust!" << endl;
                }
            }            
        }
        /* 
            Houses turn to play
            - house will hit on total<16 or fold on total>16
        */
        if(house.getScore() < 16)
        { 
            house.hit(deck.TopCard());
            deck.Discard();
            printGame();
            cout << "The House chooses to hit." << endl;
        } else
        {
            house.setState(false);
            printGame();
            cout << "The house chooses to stay." << endl;
            
        }
        /*
            End of turn logic 
        */

    }
}

void BlackJack::multi_game()
{

}

void BlackJack::single_game()
{
    Player player;
    players.push_back(&player);
    deck.Shuffle(3);
    deal(2);
    play();  
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


