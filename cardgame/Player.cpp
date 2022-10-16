#include "Player.h"

std::vector<Card*> Player::getHand()
{
    return hand;
}

double Player::bet(double bet)
{
    balance -= bet;
    return bet;
}

double Player::getBalance()
{
    return balance;
}

void Player::pay(double money)
{
    balance += money;
}

void Player::hit(Card* card)
{
    hand.push_back(card);
    std::cout << card->getValue() << std::endl;
    score += card->getValue();
    system("pause");
}

void Player::fold()
{

}

int Player::getScore()
{
    return score;
}

bool Player::getState()
{
    return isPlaying;
}

void Player::setState(bool state)
{
    isPlaying = state;
}

