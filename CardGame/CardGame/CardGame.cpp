// CardGame.cpp : Defines the entry point for the console application.
// Card shuffling and dealing program.
#include "stdafx.h"
#include "DeckOfCards.h" // DeckOfCards class definition

int main()
{
	DeckOfCards deckOfCards; // create DeckOfCards object

	deckOfCards.shuffle(); // shuffle the cards in the deck
	deckOfCards.deal(); // deal the cards in the deck
	return 0; // indicates successful termination
} // end main