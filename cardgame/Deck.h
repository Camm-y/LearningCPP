#ifndef DECK_H
#define DECK_H

#include <vector>
#include "Card.h"
#include <iostream>

class Deck
{
public:
    Deck();
    ~Deck();

private:
//pointers and virtual functions to make use of polymorphism
    std::vector<Card*> deck;


};

#endif