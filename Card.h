#pragma once
#include <iostream>
enum class ECardType
{
	None = -1,
	Clova = 0,
	Spade,
	Heart,
	Diamond,
	Max
};
class FCard
{
public:
	FCard();
	virtual ~FCard();

	void SetShape(std::string NewShape);
	void SetNumber(int NewNumber); //카드 숫자
	void SetType(ECardType NewType); //enum으로 카드 모양
	int GetScore(); //스코어를 가져 오는데 그림이 나오면 10으로 리턴
					
protected:
	ECardType Type;
	std::string Shape;
	int Number;
	
	void ShowNumber(); //카드 숫자 출력 모양 넣어서 
public:
	void Show(); //콘솔에 모양과 숫자 출력
};