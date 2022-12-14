#ifndef PLAYER_H
#define PLAYER_H

#include "Deck.h"

class Player{

    std::vector<Card*> hand;
    int score = 0;
    double balance = 5000;
    bool isPlaying;

    public:
        std::vector<Card*> getHand();
        //Card* discard(Card* card);
        double bet(double bet);
        double getBalance();
        void pay(double money);
        void hit(Card* card);
        void fold();
        int getScore();
        bool getState();
        void setState(bool state);

};

#endif