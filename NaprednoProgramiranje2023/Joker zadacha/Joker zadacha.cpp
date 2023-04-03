//Valentin Stojanovski INKI947
#include <iostream>
#include <algorithm>
#include <random>
#include <chrono>
#include <vector>

using namespace std;


struct Card {
    int rank;   // Ace = 1, Jack = 11, Queen = 12, King = 13
    char suit;  // 'C' = Clubs, 'D' = Diamonds, 'H' = Hearts, 'S' = Spades
};

// Kreirame shpil so 52 karti i 2 jokeri 
vector<Card> createDeck() {
    vector<Card> deck;
    for (int rank = 1; rank <= 13; rank++) {
        deck.push_back({ rank, 'C' });  // Clubs
        deck.push_back({ rank, 'D' });  // Diamonds
        deck.push_back({ rank, 'H' });  // Hearts
        deck.push_back({ rank, 'S' });  // Spades
    }
    deck.push_back({ 0, 'J' });  // Joker 1
    deck.push_back({ 0, 'J' });  // Joker 2
    return deck;
}

// Meshame na karti so algoritam za random meshanje
void shuffleDeck(vector<Card>& deck) {
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    shuffle(deck.begin(), deck.end(), default_random_engine(seed));
}

int main() {
    // gi meshame kartite
    vector<Card> deck = createDeck();
    shuffleDeck(deck);

    // Gi delime kartite na 4 igraci
    vector<vector<Card>> players(4);
    int playerIndex = 0;
    for (int i = 0; i < deck.size(); i++) {
        players[playerIndex].push_back(deck[i]);
        playerIndex = (playerIndex + 1) % 4;
    }

    // Se pecati rezultatot
    for (int i = 0; i < players.size(); i++) {
        cout << "Player " << i + 1 << "'s hand:" << endl;
        for (int j = 0; j < players[i].size(); j++) {
            cout << players[i][j].rank << players[i][j].suit << " ";
        }
        cout << endl;
    }

    return 0;
}