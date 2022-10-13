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
    if(Rank <= TEN)
        return static_cast<int>(Rank);

    if(Rank <= KING)
        return 10;

    return 11;
}

void Card::Print()
{
    if(Rank <= TEN)
        std::cout << Rank;
    else if(Rank == JACK)
        std::cout << "J";
    else if(Rank == QUEEN)
        std::cout << "Q";
    else if(Rank == KING)
        std::cout << "K";
    else
        std::cout << "A";
    
    std::cout << " ";

    switch(Suit)
    {
        case HEARTS:
            std::cout << "H";
            break;
        case DIAMONDS:
            std::cout << "D";
            break;
        case SPADES:
            std::cout << "S";
            break;
        case CLUBS:
            std::cout << "C";
            break;
    }
}



