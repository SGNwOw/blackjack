#pragma once
#include <iostream>
#include <string>
#include "Card.h"
#include <vector>
#include "Deck.h"
class Dealer
{
public:
    Dealer() = default;
    void add_top_card_to_vector(Deck& deck) {
        hand_of_dealer.push_back(deck.draw_top_card());
    }
    void clear_hand_of_dealer() {
        hand_of_dealer.clear();
    }
    int sum_hand_of_dealer() {
        int sum = 0;
        for (const Card& card : hand_of_dealer) {
            int value = static_cast<int>(card.get_dignity());
            if (value >= 10 && value < 14) {
                value = 10;
            }
            if (value == 14) {
                value = 11;
            }
            sum += value;
        }
        return sum;
    }
    void print_hand_of_dealer() {
        for (const Card& card : hand_of_dealer) {
            std::cout << "Suit: " << static_cast<int>(card.get_suit()) << ", Dignity: " << static_cast<int>(card.get_dignity()) << std::endl;
        }
    }
public:
    int sum;
    std::vector<Card> hand_of_dealer;
};/////



