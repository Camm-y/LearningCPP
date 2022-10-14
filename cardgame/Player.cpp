#include "Player.h"


std::vector<Card*> Player::getHand()
{
    return this->hand;
}

double Player::bet(double bet)
{
    this->balance = this->balance-bet;
    return bet;
}

void Player::hit(Card* card)
{
    hand.push_back(card);
}

void Player::fold()
{

}

int Player::calculate_score()
{
    return this->hand.front()->getValue() + this->hand.back()->getValue();
}