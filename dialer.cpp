#include"deck.h"
#include"card.h"
#include<vector>
#include"hand.h"
#include"player.h"
#include <string>
#include"dialer.h"
using namespace std;

void Dialer::playd(Deck& fdeck) {
	//������ ����� ����� ���� �� ������ 17 ��� ������
	//����  ���� ������ 17
	do {
		// ����� ����� 
		takeOneCard(fdeck);
	} while (calculateScore() < 17);
	printHand();
	cout << "dialer summ is " << calculateScore() << endl;
}