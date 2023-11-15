#include <iostream>
#include"Card.h"
#include"Deck.h"
#include "Player.h"
#include <string>
#include "Dealer.h"
#include "Game.h"
int main() {
    setlocale(LC_ALL, "ru");
    Game game;
    game.fill_deck_game();
    game.game_blackjack();
    /* Deck deck;
     deck.fill_deck();
     deck.print_deck();
     Dealer zalupa;
     zalupa.add_top_card_to_vector(deck);
     deck.remove_top_card();
     zalupa.add_top_card_to_vector(deck);
     std::cout << " ----------------------------------------------------------- " << "\n";
     zalupa.print_hand_of_dealer();
     std::cout << " ----------------------------------------------------------- " << "\n";
     std::cout<<zalupa.sum_hand_of_dealer();*/


     /* Player player;std::cout << " ----------------------------------------------------------- " << "\n";
      player.add_top_card_to_vector(deck);
      deck.remove_top_card();
      player.add_top_card_to_vector(deck);
      player.print_hand();
      std::cout << " ----------------------------------------------------------- " << "\n";
      std::cout<<player.sum_of_hand();*/
      //deck.print_deck();
      //std::cout << " ----------------------------------------------------------- " << "\n";
      ////deck.shuffle();


      ////player.add_top_card_to_vector(deck);
      //deck.shuffle();
      //player.add_top_card_to_vector(deck);
      //deck.remove_top_card();
      //player.add_top_card_to_vector(deck);
      ////std::vector<Card> my_vector = player.get_vector();

      //for (const Card& card : player.get_vector()) {
      //    std::cout << "Suit: " << static_cast<int>(card.get_suit()) << ", Dignity: " << static_cast<int>(card.get_dignity()) << std::endl;
      //}

      //std::cout << " -----------------------------??????------------------------------ " << "\n";
      ////int sum = 0;
      ////for (const Card& card : player.get_vector()) {
      ////    sum += static_cast<int>(card.get_dignity());
      ////    //std::cout << " Dignity: " << static_cast<int>(card.get_dignity()) << std::endl;
      ////    std::cout << sum<<"\n";
      ////}
      //std::cout<<player.sum_of_hand();
      //std::cout << " ----------------------------------------------------------- " << "\n";
      //deck.remove_top_card();
      //std::cout << " ----------------------------------------------------------- " << "\n";
      //deck.print_deck();

      //player.ClearHand();
      //
      //Card card1(Card::Suit::hearts, Card::Dignity::ace);
      //std::cout <<  static_cast<int>(card.get_suit()) << std::endl;
      //std::cout << static_cast<int>(card.get_dignity()) << std::endl; 
      /*Deck deck;
      deck.fill_deck();
      deck.print_deck();
      std::cout << " ----------------------------------------------------------- " << "\n";
      deck.reset_deck();
      deck.fill_deck();
      deck.shuffle();
      deck.print_deck();
      std::cout << " ----------------------------------------------------------- " << "\n";
      deck.remove_top_card();
      deck.print_deck();
      std::cout << " ----------------------------------------------------------- " << "\n";*/

}
