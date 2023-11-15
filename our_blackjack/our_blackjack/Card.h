#pragma once
class Card
{
public:
    Card() = default;
    enum class Dignity { two, three, four, five, six, seven, eight, nine, ten, jack, queen = 10, king, ace };
    enum class Suit { clubs, diamonds, hearts, spades };
    Card(Card::Suit suit, Card::Dignity dignity) {
        m_dignity = dignity;
        m_suit = suit;
    }
    Suit get_suit() const {
        return m_suit;
    }
    Dignity get_dignity() const {
        return m_dignity;
    }

    void set_suit(Suit suit);
    void set_dignity(Dignity dignity);
    int get_value() const;
    Dignity dignity;
    Dignity m_dignity;
    Suit m_suit;
};
