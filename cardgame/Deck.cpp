#include "Deck.h"



Deck::Deck()
: deck()
{
    // never actually try to do a for loop with enumeration like this
    for(Card::Ranks r=Card::TWO; r <= Card::ACE; r = static_cast<Card::Ranks>(static_cast<int>(r) + 1))
    {
        for(Card::Suits s=Card::HEARTS; s <= Card::SPADES; s = static_cast<Card::Suits>(static_cast<int>(s) + 1))
        {
            // add a card to the deck
           deck.push_front(new Card(r,s));
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

void Deck::Print()
{
    for(Card* card : deck)
    {
        card->Print();
        std::cout << " ";
    }
}
//basic shuffle algorithm
void Deck::Shuffle()
{
    std::random_shuffle(deck.begin(), deck.end());
}

Card* Deck::TopCard()
{
    return deck.front();
}
void Deck::PopCard()
{
    deck.push_back(deck.front()); //this will create a copy of the card
    deck.erase(deck.begin()); //this clears the copy
}
