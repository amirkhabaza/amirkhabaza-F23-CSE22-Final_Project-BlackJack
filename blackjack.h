#ifndef BLACKJACK_H
#define BLACKJACK_H
#include <iostream>
#include <cstdlib>  
#include <ctime>    

// C++ macros for changing background color and text color of the terminal
#define RESET "\033[0m"             // reset terminal
#define WHITE_BG "\033[47m"         // white background
#define RED_CARD "\033[1;47;31m"    // white background + red text color
#define BLACK_CARD "\033[1;47;30m"  // white background + black text color

void shuffleCards(std::string cards[], int size) {
    // Seed the random number generator
    std::srand(std::time(0));
    //

    // Shuffle the cards using the Fisher-Yates algorithm
    for (int i = size - 1; i > 0; --i) {
        int j = std::rand() % (i + 1);
        std::swap(cards[i], cards[j]);
    }
}

 void printCard(const std::string card) {
   // Function to print a single card
   std::cout << WHITE_BG;
   if (card[0] == 'H' || card[0] == 'D') {
       std::cout << RED_CARD;
   } else {
       std::cout << BLACK_CARD;
   }
   std::cout << "  ";
   std::cout << card;
 
}


void printHand(std::string shuffledCards[], int startingHand)
{
//TOP PART
   for (int i = 0; i < startingHand; i++)
   {
       std::cout << WHITE_BG << "          " << RESET ;
       if ( i < startingHand - 1){
       std::cout << " ";
       }
   }
std::cout << std::endl;
//TOP NUM/LET
   for (int i = 0; i < startingHand; i++)
   {
//ace PART
       if (shuffledCards[i] == "AH" || shuffledCards[i] == "AD")
       {
           std::cout << WHITE_BG << RED_CARD << "  A       " << RESET ;
       }
       else if (shuffledCards[i] == "AS" || shuffledCards[i] == "AC")
       {
           std::cout << WHITE_BG << BLACK_CARD << "  A       " << RESET ;
       }
//2 PART
       else if (shuffledCards[i] == "2H" || shuffledCards[i] == "2D")
       {
           std::cout << WHITE_BG << RED_CARD << "  2       " << RESET ;
       }
       else if (shuffledCards[i] == "2S" || shuffledCards[i] == "2C")
       {
           std::cout << WHITE_BG << BLACK_CARD << "  2       " << RESET ;
       }




//3 3PART
       else if (shuffledCards[i] == "3H" || shuffledCards[i] == "3D")
       {
           std::cout << WHITE_BG << RED_CARD << "  3       " << RESET ;
       }
       else if (shuffledCards[i] == "3S" || shuffledCards[i] == "3C")
       {
           std::cout << WHITE_BG << BLACK_CARD << "  3       " << RESET ;
       }
//4 PART
       else if (shuffledCards[i] == "4H" || shuffledCards[i] == "4D")
       {
           std::cout << WHITE_BG << RED_CARD << "  4       " << RESET ;
       }
       else if (shuffledCards[i] == "4S" || shuffledCards[i] == "4C")
       {
           std::cout << WHITE_BG << BLACK_CARD << "  4       " << RESET ;
       }
//5
       else if (shuffledCards[i] == "5H" || shuffledCards[i] == "5D")
       {
           std::cout << WHITE_BG << RED_CARD << "  5       " << RESET ;
       }
       else if (shuffledCards[i] == "5S" || shuffledCards[i] == "5C")
       {
           std::cout << WHITE_BG << BLACK_CARD << "  5       " << RESET ;
       }
//6
       else if (shuffledCards[i] == "6H" || shuffledCards[i] == "6D")
       {
           std::cout << WHITE_BG << RED_CARD << "  6       " << RESET ;
       }
       else if (shuffledCards[i] == "6S" || shuffledCards[i] == "6C")
       {
           std::cout << WHITE_BG << BLACK_CARD << "  6       " << RESET ;
       }
//7
       else if (shuffledCards[i] == "7H" || shuffledCards[i] == "7D")
       {
           std::cout << WHITE_BG << RED_CARD << "  7       " << RESET ;
       }
       else if (shuffledCards[i] == "7S" || shuffledCards[i] == "7C")
       {
           std::cout << WHITE_BG << BLACK_CARD << "  7       " << RESET ;
       }
//8
       else if (shuffledCards[i] == "8H" || shuffledCards[i] == "8D")
       {
           std::cout << WHITE_BG << RED_CARD << "  8       " << RESET ;
       }
       else if (shuffledCards[i] == "8S" || shuffledCards[i] == "8C")
       {
           std::cout << WHITE_BG << BLACK_CARD << "  8       " << RESET ;
       }
//9
       else if (shuffledCards[i] == "9H" || shuffledCards[i] == "9D")
       {
           std::cout << WHITE_BG << RED_CARD << "  9       " << RESET ;
       }
       else if (shuffledCards[i] == "9S" || shuffledCards[i] == "9C")
       {
           std::cout << WHITE_BG << BLACK_CARD << "  9       " << RESET ;
       }
//10
       else if (shuffledCards[i] == "10H" || shuffledCards[i] == "10D")
       {
           std::cout << WHITE_BG << RED_CARD << "  10      " << RESET ;
       }
       else if (shuffledCards[i] == "10S" || shuffledCards[i] == "10C")
       {
           std::cout << WHITE_BG << BLACK_CARD << "  10      " << RESET ;
       }
//J
       else if (shuffledCards[i] == "JH" || shuffledCards[i] == "JD")
       {
           std::cout << WHITE_BG << RED_CARD << "  J       " << RESET ;
       }
       else if (shuffledCards[i] == "JS" || shuffledCards[i] == "JC")
       {
           std::cout << WHITE_BG << BLACK_CARD << "  J       " << RESET ;
       }
//Q
       else if (shuffledCards[i] == "QH" || shuffledCards[i] == "QD")
       {
           std::cout << WHITE_BG << RED_CARD << "  Q       " << RESET ;
       }
       else if (shuffledCards[i] == "QS" || shuffledCards[i] == "QC")
       {
           std::cout << WHITE_BG << BLACK_CARD << "  Q       " << RESET ;
       }
//K
       else if (shuffledCards[i] == "KH" || shuffledCards[i] == "KD")
       {
           std::cout << WHITE_BG << RED_CARD << "  K       " << RESET ;
       }
       else if (shuffledCards[i] == "KS" || shuffledCards[i] == "KC")
       {
           std::cout << WHITE_BG << BLACK_CARD << "  K       " << RESET ;
       }
       if ( i < startingHand - 1){
       std::cout << " ";
       }
   }
std::cout << std::endl;
//SYM 1ST
   for (int i = 0; i < startingHand; i++)
   {
//d
       if (shuffledCards[i] == "AD" || shuffledCards[i] == "2D" || shuffledCards[i] == "3D" || shuffledCards[i] == "4D" || shuffledCards[i] == "5D" || shuffledCards[i] == "6D" || shuffledCards[i] == "7D" || shuffledCards[i] == "8D" || shuffledCards[i] == "9D" || shuffledCards[i] == "10D" || shuffledCards[i] == "JD" || shuffledCards[i] == "QD" || shuffledCards[i] == "KD")
       {
       std::cout << WHITE_BG << RED_CARD << "    /\\    " << RESET ;
       }
//h
       else if (shuffledCards[i] == "AH" || shuffledCards[i] == "2H" || shuffledCards[i] == "3H" || shuffledCards[i] == "4H" || shuffledCards[i] == "5H" || shuffledCards[i] == "6H" || shuffledCards[i] == "7H" || shuffledCards[i] == "8H" || shuffledCards[i] == "9H" || shuffledCards[i] == "10H" || shuffledCards[i] == "JH" || shuffledCards[i] == "QH" || shuffledCards[i] == "KH")
       {
       std::cout << WHITE_BG << RED_CARD << "   _  _   " << RESET ;
       }
//s
       else if (shuffledCards[i] == "AS" || shuffledCards[i] == "2S" || shuffledCards[i] == "3S" || shuffledCards[i] == "4S" || shuffledCards[i] == "5S" || shuffledCards[i] == "6S" || shuffledCards[i] == "7S" || shuffledCards[i] == "8S" || shuffledCards[i] == "9S" || shuffledCards[i] == "10S" || shuffledCards[i] == "JS" || shuffledCards[i] == "QS" || shuffledCards[i] == "KS")
       {
       std::cout << WHITE_BG << BLACK_CARD << "    /\\    " << RESET ;
       }
//c
       else if (shuffledCards[i] == "AC" || shuffledCards[i] == "2C" || shuffledCards[i] == "3C" || shuffledCards[i] == "4C" || shuffledCards[i] == "5C" || shuffledCards[i] == "6C" || shuffledCards[i] == "7C" || shuffledCards[i] == "8C" || shuffledCards[i] == "9C" || shuffledCards[i] == "10C" || shuffledCards[i] == "JC" || shuffledCards[i] == "QC" || shuffledCards[i] == "KC")
       {
       std::cout << WHITE_BG << BLACK_CARD << "    __    " << RESET ;
       }
       if ( i < startingHand - 1){
       std::cout << " ";
       }
   }
std::cout << std::endl;   
//SYM 2ND
   for (int i = 0; i < startingHand; i++)
   {
//d
       if (shuffledCards[i] == "AD" || shuffledCards[i] == "2D" || shuffledCards[i] == "3D" || shuffledCards[i] == "4D" || shuffledCards[i] == "5D" || shuffledCards[i] == "6D" || shuffledCards[i] == "7D" || shuffledCards[i] == "8D" || shuffledCards[i] == "9D" || shuffledCards[i] == "10D" || shuffledCards[i] == "JD" || shuffledCards[i] == "QD" || shuffledCards[i] == "KD")
       {
       std::cout << WHITE_BG << RED_CARD << "   /  \\   " << RESET ;
       }
//h
       else if (shuffledCards[i] == "AH" || shuffledCards[i] == "2H" || shuffledCards[i] == "3H" || shuffledCards[i] == "4H" || shuffledCards[i] == "5H" || shuffledCards[i] == "6H" || shuffledCards[i] == "7H" || shuffledCards[i] == "8H" || shuffledCards[i] == "9H" || shuffledCards[i] == "10H" || shuffledCards[i] == "JH" || shuffledCards[i] == "QH" || shuffledCards[i] == "KH")
       {
       std::cout << WHITE_BG << RED_CARD << "  ( \\/ )  " << RESET ;
       }
//s
       else if (shuffledCards[i] == "AS" || shuffledCards[i] == "2S" || shuffledCards[i] == "3S" || shuffledCards[i] == "4S" || shuffledCards[i] == "5S" || shuffledCards[i] == "6S" || shuffledCards[i] == "7S" || shuffledCards[i] == "8S" || shuffledCards[i] == "9S" || shuffledCards[i] == "10S" || shuffledCards[i] == "JS" || shuffledCards[i] == "QS" || shuffledCards[i] == "KS")
       {
       std::cout << WHITE_BG << BLACK_CARD << "   /  \\   " << RESET ;
       }
//c
       else if (shuffledCards[i] == "AC" || shuffledCards[i] == "2C" || shuffledCards[i] == "3C" || shuffledCards[i] == "4C" || shuffledCards[i] == "5C" || shuffledCards[i] == "6C" || shuffledCards[i] == "7C" || shuffledCards[i] == "8C" || shuffledCards[i] == "9C" || shuffledCards[i] == "10C" || shuffledCards[i] == "JC" || shuffledCards[i] == "QC" || shuffledCards[i] == "KC")
       {
       std::cout << WHITE_BG << BLACK_CARD << "   (  )   " << RESET;
       }
       if ( i < startingHand - 1){
       std::cout << " ";
       }
   }


std::cout << std::endl;
//SYM 3RD
   for (int i = 0; i < startingHand; i++)
   {
//d + h
       if (shuffledCards[i] == "AD" || shuffledCards[i] == "2D" || shuffledCards[i] == "3D" || shuffledCards[i] == "4D" || shuffledCards[i] == "5D" || shuffledCards[i] == "6D" || shuffledCards[i] == "7D" || shuffledCards[i] == "8D" || shuffledCards[i] == "9D" || shuffledCards[i] == "10D" || shuffledCards[i] == "JD" || shuffledCards[i] == "QD" || shuffledCards[i] == "KD" || shuffledCards[i] == "AH" || shuffledCards[i] == "2H" || shuffledCards[i] == "3H" || shuffledCards[i] == "4H" || shuffledCards[i] == "5H" || shuffledCards[i] == "6H" || shuffledCards[i] == "7H" || shuffledCards[i] == "8H" || shuffledCards[i] == "9H" || shuffledCards[i] == "10H" || shuffledCards[i] == "JH" || shuffledCards[i] == "QH" || shuffledCards[i] == "KH")
       {
       std::cout << WHITE_BG << RED_CARD << "   \\  /   " << RESET ;
       }
//s + c
       else if (shuffledCards[i] == "AS" || shuffledCards[i] == "2S" || shuffledCards[i] == "3S" || shuffledCards[i] == "4S" || shuffledCards[i] == "5S" || shuffledCards[i] == "6S" || shuffledCards[i] == "7S" || shuffledCards[i] == "8S" || shuffledCards[i] == "9S" || shuffledCards[i] == "10S" || shuffledCards[i] == "JS" || shuffledCards[i] == "QS" || shuffledCards[i] == "KS" || shuffledCards[i] == "AC" || shuffledCards[i] == "2C" || shuffledCards[i] == "3C" || shuffledCards[i] == "4C" || shuffledCards[i] == "5C" || shuffledCards[i] == "6C" || shuffledCards[i] == "7C" || shuffledCards[i] == "8C" || shuffledCards[i] == "9C" || shuffledCards[i] == "10C" || shuffledCards[i] == "JC" || shuffledCards[i] == "QC" || shuffledCards[i] == "KC")
       {
       std::cout << WHITE_BG << BLACK_CARD << "  (____)  " << RESET ;
       }
       if ( i < startingHand - 1){
       std::cout << " ";
       }
   }
std::cout << std::endl;
//SYM 4TH
   for (int i = 0; i < startingHand; i++)
   {
//d + h
       if (shuffledCards[i] == "AD" || shuffledCards[i] == "2D" || shuffledCards[i] == "3D" || shuffledCards[i] == "4D" || shuffledCards[i] == "5D" || shuffledCards[i] == "6D" || shuffledCards[i] == "7D" || shuffledCards[i] == "8D" || shuffledCards[i] == "9D" || shuffledCards[i] == "10D" || shuffledCards[i] == "JD" || shuffledCards[i] == "QD" || shuffledCards[i] == "KD" || shuffledCards[i] == "AH" || shuffledCards[i] == "2H" || shuffledCards[i] == "3H" || shuffledCards[i] == "4H" || shuffledCards[i] == "5H" || shuffledCards[i] == "6H" || shuffledCards[i] == "7H" || shuffledCards[i] == "8H" || shuffledCards[i] == "9H" || shuffledCards[i] == "10H" || shuffledCards[i] == "JH" || shuffledCards[i] == "QH" || shuffledCards[i] == "KH")
       {
       std::cout << WHITE_BG << RED_CARD << "    \\/    " << RESET ;
       }
//s + c
       else if (shuffledCards[i] == "AS" || shuffledCards[i] == "2S" || shuffledCards[i] == "3S" || shuffledCards[i] == "4S" || shuffledCards[i] == "5S" || shuffledCards[i] == "6S" || shuffledCards[i] == "7S" || shuffledCards[i] == "8S" || shuffledCards[i] == "9S" || shuffledCards[i] == "10S" || shuffledCards[i] == "JS" || shuffledCards[i] == "QS" || shuffledCards[i] == "KS" || shuffledCards[i] == "AC" || shuffledCards[i] == "2C" || shuffledCards[i] == "3C" || shuffledCards[i] == "4C" || shuffledCards[i] == "5C" || shuffledCards[i] == "6C" || shuffledCards[i] == "7C" || shuffledCards[i] == "8C" || shuffledCards[i] == "9C" || shuffledCards[i] == "10C" || shuffledCards[i] == "JC" || shuffledCards[i] == "QC" || shuffledCards[i] == "KC")
       {
       std::cout << WHITE_BG << BLACK_CARD << "    ||    " << RESET ;
       }
       if ( i < startingHand - 1){
       std::cout << " ";
       }
   }
std::cout << std::endl;
//BOTTOM NUM/LET
   for (int i = 0; i < startingHand; i++)
   {
//ace
       if (shuffledCards[i] == "AH" || shuffledCards[i] == "AD")
       {
           std::cout << WHITE_BG << RED_CARD << "       A  " << RESET ;
       }
       else if (shuffledCards[i] == "AS" || shuffledCards[i] == "AC")
       {
           std::cout << WHITE_BG << BLACK_CARD << "       A  " << RESET ;
       }
//2
       else if (shuffledCards[i] == "2H" || shuffledCards[i] == "2D")
       {
           std::cout << WHITE_BG << RED_CARD << "       2  " << RESET ;
       }
       else if (shuffledCards[i] == "2S" || shuffledCards[i] == "2C")
       {
           std::cout << WHITE_BG << BLACK_CARD << "       2  " << RESET ;
       }




//3
       else if (shuffledCards[i] == "3H" || shuffledCards[i] == "3D")
       {
           std::cout << WHITE_BG << RED_CARD << "       3  " << RESET ;
       }
       else if (shuffledCards[i] == "3S" || shuffledCards[i] == "3C")
       {
           std::cout << WHITE_BG << BLACK_CARD << "       3  " << RESET ;
       }
//4
       else if (shuffledCards[i] == "4H" || shuffledCards[i] == "4D")
       {
           std::cout << WHITE_BG << RED_CARD << "       4  " << RESET ;
       }
       else if (shuffledCards[i] == "4S" || shuffledCards[i] == "4C")
       {
           std::cout << WHITE_BG << BLACK_CARD << "       4  " << RESET ;
       }
//5
       else if (shuffledCards[i] == "5H" || shuffledCards[i] == "5D")
       {
           std::cout << WHITE_BG << RED_CARD << "       5  " << RESET ;
       }
       else if (shuffledCards[i] == "5S" || shuffledCards[i] == "5C")
       {
           std::cout << WHITE_BG << BLACK_CARD << "       5  " << RESET ;
       }
//6
       else if (shuffledCards[i] == "6H" || shuffledCards[i] == "6D")
       {
           std::cout << WHITE_BG << RED_CARD << "       6  " << RESET ;
       }
       else if (shuffledCards[i] == "6S" || shuffledCards[i] == "6C")
       {
           std::cout << WHITE_BG << BLACK_CARD << "       6  " << RESET ;
       }
//7
       else if (shuffledCards[i] == "7H" || shuffledCards[i] == "7D")
       {
           std::cout << WHITE_BG << RED_CARD << "       7  " << RESET ;
       }
       else if (shuffledCards[i] == "7S" || shuffledCards[i] == "7C")
       {
           std::cout << WHITE_BG << BLACK_CARD << "       7  " << RESET ;
       }
//8
       else if (shuffledCards[i] == "8H" || shuffledCards[i] == "8D")
       {
           std::cout << WHITE_BG << RED_CARD << "       8  " << RESET ;
       }
       else if (shuffledCards[i] == "8S" || shuffledCards[i] == "8C")
       {
           std::cout << WHITE_BG << BLACK_CARD << "       8  " << RESET ;
       }
//9
       else if (shuffledCards[i] == "9H" || shuffledCards[i] == "9D")
       {
           std::cout << WHITE_BG << RED_CARD << "       9  " << RESET ;
       }
       else if (shuffledCards[i] == "9S" || shuffledCards[i] == "9C")
       {
           std::cout << WHITE_BG << BLACK_CARD << "       9  " << RESET ;
       }
//10
       else if (shuffledCards[i] == "10H" || shuffledCards[i] == "10D")
       {
           std::cout << WHITE_BG << RED_CARD << "      10  " << RESET ;
       }
       else if (shuffledCards[i] == "10S" || shuffledCards[i] == "10C")
       {
           std::cout << WHITE_BG << BLACK_CARD << "      10  " << RESET ;
       }
//J
       else if (shuffledCards[i] == "JH" || shuffledCards[i] == "JD")
       {
           std::cout << WHITE_BG << RED_CARD << "       J  " << RESET ;
       }
       else if (shuffledCards[i] == "JS" || shuffledCards[i] == "JC")
       {
           std::cout << WHITE_BG << BLACK_CARD << "       J  " << RESET ;
       }
//Q
       else if (shuffledCards[i] == "QH" || shuffledCards[i] == "QD")
       {
           std::cout << WHITE_BG << RED_CARD << "       Q  " << RESET ;
       }
       else if (shuffledCards[i] == "QS" || shuffledCards[i] == "QC")
       {
           std::cout << WHITE_BG << BLACK_CARD << "       Q  " << RESET ;
       }
//K
       else if (shuffledCards[i] == "KH" || shuffledCards[i] == "KD")
       {
           std::cout << WHITE_BG << RED_CARD << "       K  " << RESET ;
       }
       else if (shuffledCards[i] == "KS" || shuffledCards[i] == "KC")
       {
           std::cout << WHITE_BG << BLACK_CARD << "       K  " << RESET ;
       }
       if ( i < startingHand - 1){
       std::cout << " ";
       }
   }
std::cout << std::endl;
//BOTTOM
   for (int i = 0; i < startingHand; i++)
   {
       std::cout << WHITE_BG << "          " << RESET ;
       if ( i < startingHand - 1){
       std::cout << " ";
       }
   }
std::cout << std::endl;
   return;
}
int calculatePoints(const std::string hand[], int size) {
    // Function to calculate the total points of a hand of cards
    int points = 0;
    int numAces = 0;

    for (int i = 0; i < size; ++i) {
        char face = hand[i][0];

        if (face >= '2' && face <= '9') {
            points += face - '0';
        } else if (face == 'A') {
            points += 11;
            ++numAces;
        } else {
            points += 10;
        }
    }

    // Adjust points for Aces
    while (points > 21 && numAces > 0) {
        points -= 10;
        --numAces;
    }

    return points;
}


std::string determineOutcome(const std::string playerHand[], int playerHandSize, const std::string dealerHand[], int dealerHandSize) {
    // Function to determine the outcome of the game
    int playerPoints = calculatePoints(playerHand, playerHandSize);
    int dealerPoints = calculatePoints(dealerHand, dealerHandSize);

    if (playerPoints == dealerPoints && playerHandSize==2 && dealerHandSize==2) {
       return "It's a tie!";
   } 
   else if (playerPoints == 21 && playerHandSize == 2) {
       return "You got a blackjack!";
   } else if (dealerPoints == 21 && dealerHandSize == 2) {
       return "Dealer got a blackjack!";
   } else if (playerPoints > 21) {
       return "You lose!";
   } else if (dealerPoints > 21) {
       return "You win!";
   } else if (playerPoints > dealerPoints) {
       return "You win!";
   } else if  (playerPoints < dealerPoints) {
       return "You lose!";
   }else{
       return "It's a tie!";
   }
}
#endif