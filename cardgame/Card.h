#pragma once

class Card
{
    public:
        enum Suits
        {
            HEARTS = 3,
            DIAMONDS,
            CLUBS,
            SPADES
        };
        enum Ranks
        {
            TWO,
            THREE,
            FOUR,
            FIVE,
            SIX,
            SEVEN,
            EIGHT,
            NINE,
            JACK,
            QUEEN,
            KING,
            ACE
        };

        Card(Ranks RANK, Suits SUIT);
        virtual ~Card();

        int getRank();
        int getSuit();

        virtual int getValue();

    private:
        int Rank;
        int Suit;
};