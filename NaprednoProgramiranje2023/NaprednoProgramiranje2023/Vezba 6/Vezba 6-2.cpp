//Valentin Stojanovski INKI947
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

// card structure definition
struct card {
    const char* face; // odreduvanje pointer face
    const char* suit; // odreduvanje pointer suit
}; // end struct card

typedef struct card Card; // nov tip na card

// prototypes
void fillDeck(Card* const wDeck, const char* wFace[],
    const char* wSuit[]);
void shuffle(Card* const wDeck);
void deal(const Card* const wDeck);

int main(void)
{
    Card deck[CARDS]; // niza od Cards

    // sto se pravi vo ovoj red ?

    //tuka se postavuvat brojkite
    const char* face[] = { "Ace", "Deuce", "Three", "Four", "Five",
       "Six", "Seven", "Eight", "Nine", "Ten",
       "Jack", "Queen", "King" };

    // sto se pravi vo ovoj red ?
    //tuka se postavuvat boite
    const char* suit[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

    srand(time(NULL)); // sto e ovaa naredba ?

    fillDeck(deck, face, suit);
    shuffle(deck);
    deal(deck);
} // end main

// vmetni strings vo Card structures
void fillDeck(Card* const wDeck, const char* wFace[],
    const char* wSuit[])
{
    size_t i;

    // loop through wDeck
    for (i = 0; i < CARDS; ++i) {
        wDeck[i].face = wFace[i % FACES];
        wDeck[i].suit = wSuit[i / FACES];
    } // end for
} // end function fillDeck

// shuffle cards
void shuffle(Card* const wDeck)
{
    size_t i;
    size_t j;  // tuka se meshat kartite
    Card temp;

    // loop thr
    for (i = 0; i < CARDS; ++i) {
        j = rand() % CARDS; // 
        temp = wDeck[i];
        wDeck[i] = wDeck[j];
        wDeck[j] = temp;
    } // end for
} // end function shuffle

// deal cards
void deal(const Card* const wDeck)
{
    size_t i; // counter

    // loop through wDeck
    for (i = 0; i < CARDS; ++i) {
        printf("%5s of %-8s%s", wDeck[i].face, wDeck[i].suit,   //tuka se dobiva rezultat od meshanjeto
            (i + 1) % 4 ? "  " : "\n");
    } // end for
} // end function deal
