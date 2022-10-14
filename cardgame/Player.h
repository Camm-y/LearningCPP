#ifndef PLAYER_H
#define PLAYER_H

#include "Deck.h"

class Player{

    std::vector<Card*> hand;
    int score;
    double balance;

    public:

        std::vector<Card*> getHand();
        //Card* discard(Card* card);
        double bet(double bet);
        void hit(Card* card);
        void fold();
        int calculate_score();
};


#endif