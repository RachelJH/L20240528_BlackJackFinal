#pragma once
#include<vector>

using namespace std;

class FCard;

class FPerson
{
public:
	FPerson();
	virtual ~FPerson();


	vector<FCard*> Cards;

	void Draw(FCard* NewCard);//���� ī�� �÷��̾ ����
	int Check(); //���� ī����� �� ����
	void Show(); //���� ���� ī�� ���
};