#ifndef BJGAME_H
#define BJGAME_H

#include "Deck.h"
#include "Player.h"

class BlackJack{

    Deck deck;
    std::vector<Player> players;
    //Deck discard;
    bool state;


    public:
        Deck getDeck();
        void deal(int n);
        void menu();
        void single_game();
        void multi_game();
        
        

        
        

};


#endif