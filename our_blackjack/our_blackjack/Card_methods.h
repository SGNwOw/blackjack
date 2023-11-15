#pragma once
#include "Card.h"
void Card::set_suit(Suit suit) {
    m_suit = suit;
}
void Card::set_dignity(Dignity dignity) {
    m_dignity = dignity;
}
int Card::get_value() const {
    return static_cast<int>(m_dignity);
}
