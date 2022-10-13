#include "Deck.h"
#include <ctime>

int main()
{
    srand(time(nullptr)); //seed for proper randomness
    Deck deck;
    deck.Shuffle();
    deck.Print();
    std::cout << std::endl;

    Card* card = deck.TopCard();
    card->Print();
    std::cout << std::endl;
    deck.PopCard();
    deck.Print();
    std::cout << std::endl;

    system("pause");
    return 0;
}