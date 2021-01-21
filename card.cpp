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
  if (m_rank == CARD_3) cout << 3 ;
  else
  if (m_rank == CARD_4) cout << 4 ;
  else
  if (m_rank == CARD_5) cout << 5 ;
  else
  if (m_rank == CARD_6) cout << 6 ;
  else
  if (m_rank == CARD_7) cout << 7 ;
  else
  if (m_rank == CARD_8) cout << 8 ;
  else
  if (m_rank == CARD_9) cout << 9;
  else
  if (m_rank == CARD_10) cout << 10  ;
  else
  if (m_rank == CARD_J) cout << "Ja "  ;
  else
  if (m_rank == CARD_Q) cout << "Qu ";
  else
  if (m_rank == CARD_K) cout << "Ki "  ;
  else
  if (m_rank == CARD_A) cout << "A "  ;
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
 if ( m_rank == CARD_2) return 2;
 else
 if ( m_rank == CARD_3) return 3;
 else
 if ( m_rank == CARD_4) return 4;
 else
 if ( m_rank == CARD_5) return 5;
 else
 if ( m_rank == CARD_6) return 6;
 else
 if ( m_rank == CARD_7) return 7;
 else
 if ( m_rank == CARD_8) return 8;
 else
 if ( m_rank == CARD_9) return 9;
 else
 if ( m_rank == CARD_10) return 10;
 else
 if ( m_rank == CARD_J) return 10;
 else
 if ( m_rank == CARD_Q) return 10;
 else
 if ( m_rank == CARD_K) return 10;
 else
 if ( m_rank == CARD_A) return 11;
}

Card::CardRank Card::get_rank() {
	return m_rank;
}

Card::CardSuits Card::get_suits() {
	return m_suit;
}

//std::ostream& operator<<(std::ostream& out, Card& fCard) {
//  if (fCard.get_rank() == Card::CARD_2)out << 2;
//  else
//  if (fCard.get_rank() == Card::CARD_3) out << 3 ;
//  else
//  if (fCard.get_rank() == Card::CARD_4)out << 4 ;
//  else
//  if (fCard.get_rank() == Card::CARD_5) out << 5 ;
//  else
//  if (fCard.get_rank() == Card::CARD_6) out << 6 ;
//  else
//  if (fCard.get_rank() == Card::CARD_7) out << 7  ;
//  else
//  if (fCard.get_rank() == Card::CARD_8) out << 8 ;
//  else
//  if (fCard.get_rank() == Card::CARD_9) out << 9 ;
//  else
//  if (fCard.get_rank() == Card::CARD_10) out << 10 ;
//  else
//  if (fCard.get_rank() == Card::CARD_J) out << "Ja " ;
//  else
//  if (fCard.get_rank() == Card::CARD_Q) out << "Qu " ;
//  else
//  if (fCard.get_rank() == Card::CARD_K) out << "Ki " ;
//  else
//  if (fCard.get_rank() == Card::CARD_A) out << "A " ;
// //вывод масти
//  if (fCard.get_suits() == Card::CARD_DIAMONDS) out << 'D' << endl;
//  else
//  if (fCard.get_suits() == Card::CARD_HEARTS) out << 'H' << endl;
//  else
//  if (fCard.get_suits() == Card::CARD_SPADES) out << 'S' << endl;
//  else
//  if (fCard.get_suits() == Card::CARD_CLUBS) out << 'C' << endl;
//	return out;
//}