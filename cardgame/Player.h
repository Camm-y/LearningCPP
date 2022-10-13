#ifndef PLAYER_H
#define PLAYER_H

#include "Deck.h"
#include "Card.h"

class Player{

    std::vector<Card*> hand;
    int score;

    public:

        std::vector<Card*> getHand();
        Card* discard(Card* card);
        void hit(Card* card);
};


#endif