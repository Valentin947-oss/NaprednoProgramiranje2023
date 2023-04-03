//???????? ??????????? ????947
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

enum class Suit { CLUBS, DIAMONDS, HEARTS, SPADES };  //?????? ?? ????
enum class Rank { ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, JOKER };  //?????? ?? ?????

struct Card {
    Suit suit;
    Rank rank;
};

void printCard(const Card& card) {
    if (card.rank == Rank::JOKER) {
        std::cout << "Joker\n";
    }
    else {
        std::cout << static_cast<int>(card.rank) + 1 << " of ";
        switch (card.suit) {
        case Suit::CLUBS:
            std::cout << "Clubs\n";
            break;
        case Suit::DIAMONDS:
            std::cout << "Diamonds\n";    //???? ?? ??????????? ?? ??? ??????? ?? ????? ?? switch  case
            break;
        case Suit::HEARTS:
            std::cout << "Hearts\n";
            break;
        case Suit::SPADES:
            std::cout << "Spades\n";
            break;
        }
    }
}

std::vector<Card> createDeck() {
    std::vector<Card> deck;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            deck.push_back({ static_cast<Suit>(i), static_cast<Rank>(j) });
        }
    }
    deck.push_back({ Suit::CLUBS, Rank::JOKER });
    deck.push_back({ Suit::SPADES, Rank::JOKER });  //???? ?? ???????? ???? ?? ???? ???????? ??????? Joker
    return deck;
}

void shuffleDeck(std::vector<Card>& deck) {
    static std::random_device rd;
    static std::mt19937 rng(rd());                    //???? ?? ?????? ???????
    std::shuffle(deck.begin(), deck.end(), rng);
}

int main() {
    auto deck = createDeck();
    std::cout << "Original deck:\n";    //???? ?? ??????? ????????? ???????
    for (const auto& card : deck) {
        printCard(card);
    }
    std::cout << "\nShuffled deck:\n";  //???? ?? ??????? ????????
    shuffleDeck(deck);
    for (const auto& card : deck) {
        printCard(card);
    }
    return 0;
}
