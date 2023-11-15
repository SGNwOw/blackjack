#pragma once
#include "Card.h"
#include "Dealer.h"
#include "Player.h"
#include "Deck.h"
class Game {
public:
    Deck m_deck;
    Player m_player;
    Dealer m_dealer;
    Game() = default;
    /// desk
    void fill_deck_game() {
        m_deck.fill_deck();
    }
    void print_deck_game() {
        m_deck.print_deck();
    }
    void shuffle_deck_game() {
        m_deck.shuffle();
    }
    void remove_top_card_deck_game() {
        m_deck.remove_top_card();
    }
    /// dealer
    void add_card_m_dealer() {
        m_dealer.add_top_card_to_vector(m_deck);
    }
    void print_hand_of_m_dealer() {
        m_dealer.print_hand_of_dealer();
    }
    int sum_hand_of_m_dealer() {
        return m_dealer.sum_hand_of_dealer();
    }

    /// player
    void add_card_m_player() {
        m_player.add_top_card_to_vector(m_deck);
    }
    void print_hand_of_m_player() {
        m_player.print_hand();
    }
    int sum_of_m_hand() {
        return m_player.sum_of_hand();
    }
    int if_sum_for_lose(int sum) {///qite
        if (sum > 21) {
            std::cout << sum << " you lose " << "\n";
            return 0;
        }
        else
        {
            return  sum;
        }

    }
    int lose_or_no_player(int value) {
        if (value > 21) {
            return 0;
        }
        return 1;
    }
    bool lose_or_no_diler(int value) {
        if (value > 21) {
            return false;
        }
        return true;
    }

    int add_card_variant() {
        std::cout << "adding a card without increasing the rate " << "\n";
        add_card_m_player();
        print_hand_of_m_player();
        std::cout << "sum of points:";
        std::cout << sum_of_m_hand();
        if (lose_or_no_player(sum_of_m_hand())) {
            return 0;
        }
        return 1;


    }
    void start() {
        shuffle_deck_game();
        add_card_m_player();
        remove_top_card_deck_game();
        add_card_m_player();
        std::cout << "player:" << "\n";
        print_hand_of_m_player();
        std::cout << "sum of player's points:";
        std::cout << if_sum_for_lose(sum_of_m_hand());
        std::cout << "\n";
        remove_top_card_deck_game();
        std::cout << "\n" << "diller:" << "\n";
        add_card_m_dealer();
        print_hand_of_m_dealer();
        std::cout << "sum of dealer's points:";
        std::cout << sum_hand_of_m_dealer() << "\n";
        std::cout << "\n";
    }
    void game_blackjack() {
        start();
        int variant = 0;
        bool ok = true;
        bool s = true;
        while (ok)
        {
            int naw = 0;
            std::cout << "select an action option" << "\n";
            std::cout << "1) add card" << "\n" << "2) skip" << "\n";
            std::cin >> naw;
            switch (naw)
            {
            case 1:///adding a card without increasing the rate
                while (s)
                {
                    add_card_variant();
                    while (variant != 2) {

                        if (sum_of_m_hand() > 21) {
                            std::cout << "\n" << "overkill\n";
                            s = false;
                            ok = false;
                            break;
                        }std::cout << "\n" << " do you want to add a card ? " << "\n";
                        std::cout << "1) yes" << "\n" << "2) no" << "\n";
                        std::cin >> variant;
                        if (variant == 1) {
                            add_card_variant();
                            if (sum_of_m_hand() > 21) {
                                std::cout << "\n" << "overkill\n";
                                s = false;
                                ok = false;
                                break;
                            }
                        }
                        else if (variant == 2) {
                            while (sum_hand_of_m_dealer() < 17)
                            {
                                add_card_m_dealer();
                            }
                            if (sum_of_m_hand() < 21 && sum_of_m_hand() > sum_hand_of_m_dealer()) {
                                std::cout << "you win" << "\n";
                                ok = false;
                                s = false;
                                break;
                            }
                            else if (sum_of_m_hand() < sum_hand_of_m_dealer() && sum_hand_of_m_dealer() < 21) {
                                std::cout << "you lose" << "\n";
                                ok = false;
                                s = false;
                                break;
                            }
                            else if (sum_hand_of_m_dealer() > 21) {
                                std::cout << "you win" << "\n";
                                s = false;
                                ok = false;
                                break;
                            }
                         
                        }
                    }
                }
            case 2:///skip
                while (sum_hand_of_m_dealer() < 17)
                {
                    add_card_m_dealer();
                }
                if (sum_of_m_hand() < 21 && sum_of_m_hand() > sum_hand_of_m_dealer()) {
                    std::cout << "you win" << "\n";
                    ok = false;
                    break;
                }
                else if (sum_of_m_hand() < sum_hand_of_m_dealer() && sum_hand_of_m_dealer() < 21) {
                    std::cout << "you lose" << "\n";
                    ok = false;
                    break;
                }
                else if (sum_hand_of_m_dealer() > 21) {
                    std::cout << "you win" << "\n";
                    ok = false;
                    break;
                }
                ok = false;
                break;
            default:
                std::cout << "you chose the wrong answer, please try again" << "\n";
            }
        }
    }

};