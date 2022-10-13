#ifndef BJGAME_H
#define BJGAME_H

#include "Deck.h"
#include "Player.h"

class BlackJack{

    Deck deck;
    Deck discard;

    public:
        Deck getDeck();
        void deal(Player p1, Player p2, int n);
        void menu();
        void single_game();
        void multi_game();
        
        

        
        

};


#endif