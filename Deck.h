#pragma once
#include <vector>

class FCard;

class FDeck
{
public:
	FDeck();
	virtual ~FDeck();

	void Check(); //카드 52개 출력

	FCard* Draw(); //현재 위치의 카드를 카드 클래스형으로 반환
protected:
	std::vector<FCard*> Cards;
	int CurrentPosition;
};

