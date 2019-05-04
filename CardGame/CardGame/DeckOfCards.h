#pragma once
// Definition of class DeckOfCards that 
// represents a deck of playing cards.

// DeckOfCards class definition
class DeckOfCards
{
public:
	DeckOfCards(); // constructor initializes deck
	void shuffle(); // shuffles cards in deck
	void deal(); // deals cards in deck
private:
	int deck[4][13]; // represents deck of cards
}; // end class DeckOfCards