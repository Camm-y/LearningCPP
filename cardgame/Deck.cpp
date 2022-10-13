#include "Deck.h"



Deck::Deck()
: deck()
{
    deck.reserve(52);
    // never actually try to do a for loop with enumeration like this
    for(Card::Ranks r=Card::TWO; r <= Card::ACE; r = static_cast<Card::Ranks>(static_cast<int>(r) + 1))
    {
        for(Card::Suits s=Card::HEARTS; s <= Card::SPADES; s = static_cast<Card::Suits>(static_cast<int>(s) + 1))
        {
           Card* card = new Card(r, s);
           card->Print();
           std::cout << std::endl;
        }

    }
}


Deck::~Deck()
{
    for(Card* c : deck)
    {
        delete c;
    }
    //clear needs the cards to also be deleted to stop memory leak
    deck.clear();
}
