#ifndef CARD_H
#define CARD_H

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
            TWO = 2,
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

        Ranks getRank();
        Suits getSuit();

        virtual int getValue();

    private:
        Ranks Rank;
        Suits Suit;
};

#endif