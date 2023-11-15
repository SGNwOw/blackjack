#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Deck.h"
#include "Card.h"
class Player : Deck
{
public:
    Player() = default;
    Player(std::string m_name) : name(m_name) {}
    void set_name(std::string m_name) {
        name = m_name;
    }
    std::string get_name() {
        return name;
    }
    void add_top_card_to_vector(Deck& deck) {
        hand_.push_back(deck.draw_top_card());
    }
    void ClearHand() {
        hand_.clear();
    }
    int sum_of_hand() {
        int sum = 0;
        for (const Card& card : hand_) {
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
    void print_hand() {
        for (const Card& card : hand_) {
            std::cout << "Suit: " << static_cast<int>(card.get_suit()) << ", Dignity: " << static_cast<int>(card.get_dignity()) << std::endl;
        }
    }
public:
    int sum;
    std::string name;
    std::vector<Card> hand_;
};

