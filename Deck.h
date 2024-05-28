#pragma once
#include <vector>

class FCard;

class FDeck
{
public:
	FDeck();
	virtual ~FDeck();

	void Check(); //ī�� 52�� ���

	FCard* Draw(); //���� ��ġ�� ī�带 ī�� Ŭ���������� ��ȯ
protected:
	std::vector<FCard*> Cards;
	int CurrentPosition;
};

