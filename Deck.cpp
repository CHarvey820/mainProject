// class to represent the Deck object
#include <iostream>
#include <vector>
#include "Card.cpp"

using namespace std;
//class Deck: consists of a vector of Cards.
class Deck{

    public:
    char SUITS[4] = {'S','C','D','H'};
    int VALUES[13]= {1,2,3,4,5,6,7,8,9,10,11,12,13};
    bool COLORS[2] = {true,false};
    //TRUE = BLACK
    //FALSE = RED
    vector<Card> Cards;

    //Method to generate a new deck of cards. The deck consists of a standard deck of 50 cards, minus the Jokers.
    vector<Card> generateDeck(){
        bool temp = false;
        //For each suit in the deck, generate all 13 cards.
        for(int i = 0; i<4;i++){
            char currentSuit = this->SUITS[i];
            if(i<2)
                temp = true;
            else
                temp = false;
            for(int j = 0; j<13;j++){
                Card card;
                card.setCardValue(VALUES[j]);
                card.setColor(temp);
                card.setSuit(currentSuit);
                card.faceUp = false;
                Cards.push_back(card);
            }
        }
        return this->Cards;
    }

};
int main(){
    Deck deck;
    vector<Card> cards = deck.generateDeck();
    for(int i = 0; i < cards.size();i++)
    {
        cards.at(i).printCard();
    }
}