#include "Player.h"


std::vector<Card*> Player::getHand()
{

}

Card* Player::discard(Card* card)
{
    //hand.erase();
    return card;
}

void Player::hit(Card* card)
{
    hand.push_back(card);
}