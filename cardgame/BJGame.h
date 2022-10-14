#ifndef BJGAME_H
#define BJGAME_H

#include "Deck.h"
#include "Player.h"

class BlackJack{

    Deck deck;
    std::vector<Player> players;
    std::vector<double> bets;
    //Deck discard;
    bool gameOver;


    public:
        Deck getDeck();
        void deal(int n);
        void menu();
        void single_game();
        void multi_game();
        void play();
        
        

        
        

};


#endif