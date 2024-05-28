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
	void SetNumber(int NewNumber); //ī�� ����
	void SetType(ECardType NewType); //enum���� ī�� ���
	int GetScore(); //���ھ ���� ���µ� �׸��� ������ 10���� ����
					
protected:
	ECardType Type;
	std::string Shape;
	int Number;
	
	void ShowNumber(); //ī�� ���� ��� ��� �־ 
public:
	void Show(); //�ֿܼ� ���� ���� ���
};