#include "Deck.h"
#include "BJGame.h"
#include <ctime>

int main()
{
     srand(time(nullptr)); //seed for proper randomness
    //   Deck deck;
    //   deck.Shuffle(1);
    //   deck.Print();
    //   std::cout << std::endl;

    //  Card* card = deck.TopCard();
    //  card->Print();
    //  std::cout << std::endl;
    //  deck.PopCard();
    //  deck.Print();
    //  std::cout << std::endl;

    //  deck.Discard();
    //  deck.Print();
    //  std::cout << std::endl;

    BlackJack game;
    game.menu();

    system("pause");
    return 0;
}