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

	void Draw(FCard* NewCard);//뽑은 카드 플레이어에 저장
	int Check(); //받은 카드들의 합 저장
	void Show(); //내가 받은 카드 출력
};