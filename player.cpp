#include"deck.h"
#include"card.h"
#include<vector>
#include"hand.h"
#include"player.h"
#include <string>
using namespace std;

void Player::play(Deck& fDeck) {
	char choice = 'y';
	/*currentCard = 0;
	int sumOfRankPlayer1 = 0;*/
	while (choice != 'n') {
		//����� ����� � ������ � ����
		takeOneCard(fDeck);
		
		//�������� ����
		printHand();
		//������� ���� � ������ ����������� ������� ������� � ���� ���
		cout << "Your summ is " << calculateScore() << endl;
		cout << "Do you want another card?";
		cout << " (enter your choice, y - yes, n - no) ";
		//��������� ����� ������
		cin >> choice;

	}
}