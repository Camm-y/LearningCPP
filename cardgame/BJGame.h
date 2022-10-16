#ifndef BJGAME_H
#define BJGAME_H

#include "Deck.h"
#include "Player.h"

class BlackJack{

    Deck deck;
    Player house;
    std::vector<Player*> players;
    std::vector<double> bets;
    //Deck discard;
    bool gameOver;
    bool playersOver;

    public:
        Deck getDeck();
        void deal(int n);
        void menu();
        void single_game();
        void multi_game();
        void play();
        void printGame();

};


#endif