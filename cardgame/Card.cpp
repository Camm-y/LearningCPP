#include "Card.h"


Card::Card(Ranks RANK, Suits SUIT)
    : Rank(RANK),
      Suit(SUIT)
      // Above adds encapsulation to the getRank & getSuit func
{
    // Nothing here
}
Card::~Card(){
    // Dont need this atm
}


Card::Ranks Card::getRank(){
    return Rank;
}
Card::Suits Card::getSuit(){
    return Suit;
}

int Card::getValue(){
    if(Rank <= JACK)
        return static_cast<int>(Rank);

    if(Rank <= KING)
        return 10;

    return 11;
}


