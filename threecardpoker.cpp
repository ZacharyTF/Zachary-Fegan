/*
made by Zachary fegan
10/12/2025
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

// Card structure
struct Card {
    int value; // 2–14 (where 11=J, 12=Q, 13=K, 14=A)
    char suit; // 'H', 'D', 'C', 'S'
};

// Generate a random card
Card getRandomCard() {
    Card c;
    c.value = rand() % 13 + 2;
    char suits[] = {'H', 'D', 'C', 'S'};
    c.suit = suits[rand() % 4];
    return c;
}

// Deal a hand of 3 cards
vector<Card> dealHand() {
    vector<Card> hand;
    for (int i = 0; i < 3; ++i) {
        hand.push_back(getRandomCard());
    }
    return hand;
}