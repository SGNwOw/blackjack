#pragma once
#include<iostream>
#include <vector>
#include "Card.h"
#include <algorithm>
#include <random>
class Deck {/// how to render methods
public:
    Deck() = default;
    void fill_deck() {
        for (int i = 0; i <= static_cast<int>(Card::Suit::spades); ++i) {
            for (int j = 0; j <= static_cast<int>(Card::Dignity::ace); ++j) {
                cardss.emplace_back(static_cast<Card::Suit>(i), static_cast<Card::Dignity>(j + 2));
            }
        }
    }
    void print_deck() {
        for (const auto& card : cardss) {
            std::cout << "Suit: " << static_cast<int>(card.get_suit()) << ", Dignity: " << static_cast<int>(card.get_dignity()) << std::endl;
        }
    }
    void reset_deck() {
        cardss.clear();
    }
    void shuffle() {
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(cardss.begin(), cardss.end(), g);
    }
    Card draw_top_card() {///qestion
        return cardss.back();
    }
    void remove_top_card() {
        cardss.pop_back();
    }
    std::vector<Card> cardss;
};

