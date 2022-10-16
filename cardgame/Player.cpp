#include "Player.h"


std::vector<Card*> Player::getHand()
{
    return this->hand;
}

double Player::bet(double bet)
{
    this->balance -= bet;
    return bet;
}

double Player::getBalance()
{
    return this->balance;
}

void Player::pay(double money)
{
    this->balance += money;
}

void Player::hit(Card* card)
{
    hand.push_back(card);
}

void Player::fold()
{

}

int Player::getScore()
{
    return this->score;
}

void Player::updateScore()
{
    int score;
    for (Card* c : this->hand)
    {
        score += c->getValue();
    }
    this->score = score;
}

bool Player::getState()
{
    return this->isPlaying;
}

void Player::setState(bool state)
{
    this->isPlaying = state;
}

