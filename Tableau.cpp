
//Class to represent the Tableau pile in solitaire.


#include <iostream>
#include "Pile.cpp"
#include <vector>
using namespace std;


class Tableau : public Pile{
private:
    Pile pile;
public:
    Tableau(){
        
    }

    bool canRecieve(Card aCard){
        if(pile.empty()){
            return (aCard.getCardValue() == 13);
        }
        return (aCard.getColor() != pile.topCard().getColor()) && (aCard.getCardValue() == pile.topCard().getCardValue()-1);

    }

    // void placeCard(){
    //     if(pile.empty()){
    //         return;
    //     }
    //     Card topCard = pile.topCard();
    //     if(!topCard.isFaceUp()){
    //         topCard.flip();
    //         return;
    //     }
    //     topCard = pile.pop();
    //     for (int i = 0; i <4; i++){
    //         if(Solitaire.FoundationPile(i).canRecieve(topCard)){
    //             Solitaire.FoundationPile(i).push(topCard);
    //             return;
    //         }
    //     }
    //     for (int i =0; i <7; i++){
    //         if (Solitaire.tableau(i).canReceive(topCard)){
    //             Solitaire.tableau(i).push(topCard);
    //             return;
    //         }
    //     }
    //     push(topCard);
    // }

};
