#ifndef DECK_H
#define DECK_H

#include <deque>
#include "Card.h"
#include <iostream>        
#include <vector>       
#include <ctime>        
#include <cstdlib>

class Deck
{
public:
    Deck();
    ~Deck();

    void Print();
    void Shuffle(int n);

    Card* TopCard(); // Selects the top card from the deck
    void PopCard(); // Discards the top card to the bottom of the deck

private:
//pointers and virtual functions to make use of polymorphism
    std::deque<Card*> deck;


};

#endif