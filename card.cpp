#include "card.h"
#include <iostream>
using namespace std;
Card::Card() {
 m_suit = CARD_DIAMONDS;
 m_rank = CARD_2;
}
Card::Card(CardRank f_rank, CardSuits f_suit) {
 m_rank = f_rank;
 m_suit = f_suit;
}
void Card::print_card() {

 if (m_rank == CARD_2) cout << 2;
 else
  if (m_rank == CARD_3) cout << 3;
  else
   if (m_rank == CARD_4) cout << 4;
   else
    if (m_rank == CARD_5) cout << 5;
    else
     if (m_rank == CARD_6) cout << 6;
     else
      if (m_rank == CARD_7) cout << 7;
      else
       if (m_rank == CARD_8) cout << 8;
       else
        if (m_rank == CARD_9) cout << 9;
        else
         if (m_rank == CARD_10) cout << 10;
         else
          if (m_rank == CARD_J) cout << 'J';
          else
           if (m_rank == CARD_Q) cout << 'Q';
           else
            if (m_rank == CARD_K) cout << 'K';
            else
             if (m_rank == CARD_A) cout << 'A';
 //вывод масти
 if (m_suit == CARD_DIAMONDS) cout << 'D' << endl;
 else
  if (m_suit == CARD_HEARTS) cout << 'H' << endl;
  else
   if (m_suit == CARD_SPADES) cout << 'S' << endl;
   else
    if (m_suit == CARD_CLUBS) cout << 'C' << endl;
}

int Card::get_score() {
 return 0;
}

