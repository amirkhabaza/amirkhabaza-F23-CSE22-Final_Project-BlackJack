#include <iostream>
#include "blackjack.h"
using namespace std;

int main() {
    int bankAmount = 250;
    int betAmount = 25;

    // cards must be represented using the following string array
    string cards[52] = {"AH", "2H", "3H", "4H", "5H", "6H", "7H", "8H", "9H", "10H", "JH", "QH", "KH", "AD", "2D", "3D", "4D", "5D", "6D", "7D", "8D", "9D", "10D", "JD", "QD", "KD", "AS", "2S", "3S", "4S", "5S", "6S", "7S", "8S", "9S", "10S", "JS", "QS", "KS", "AC", "2C", "3C", "4C", "5C", "6C", "7C", "8C", "9C", "10C", "JC", "QC", "KC"};

    // Game loop for multiple rounds
    while (true) {
        cout << "Your Bank: $" << bankAmount << endl;
        cout << "Your bet: $" << betAmount << endl;

        // Shuffle the cards at the beginning of each round
        shuffleCards(cards, 52);

        // Create player and dealer hands with random cards
        string playerHand[4];
        string dealerHand[4];

        for (int i = 0; i < 3; ++i) {
            playerHand[i] = cards[i];
            dealerHand[i] = cards[i + 2];
        }
        cout << endl;

        // Print player's initial hand
        printHand(playerHand, 2); // Print only the first two cards initially

        // Player's turn: Hit or Stand
        char choice;
        do {
            cout << "Another card? ([Y]/N): ";
            cin >> choice;

            if (choice == 'Y' || choice == 'y') {
                // Draw a new card and add it to the player's hand
                playerHand[2] = cards[4]; // For simplicity, just take the fifth card from the shuffled deck
                printHand(playerHand, 3);
            }
        } while ((choice == 'Y' || choice == 'y') && calculatePoints(playerHand, 3) < 21);

        // Dealer's turn: Draw cards until the total points reach at least 17
        while (calculatePoints(dealerHand, 4) < 17) {
            dealerHand[2] = cards[5]; // For simplicity, just take the sixth card from the shuffled deck
        }

        // Print final hands
        printHand(playerHand, 3); // Print the final player's hand
        cout << endl;
        printHand(dealerHand, 3); // Print the final dealer's hand

        // Determine and print the game outcome
        string outcome = determineOutcome(playerHand, 3, dealerHand, 3);
        cout << outcome << endl;

        // Update bank amount based on the outcome
        if (outcome == "You win!" || outcome == "You got a blackjack!") {
            bankAmount += betAmount;
            cout << endl;
        } else if (outcome == "You lose!") {
            bankAmount -= betAmount;
        }

        // Ask the user if they want to play another round
        cout << "Play again ([Y]/N): ";
        cin >> choice;
        if (choice != 'Y' && choice != 'y') {
            break; // Exit the game loop if the user doesn't want to play another round
        }
    }

    return 0;
}
