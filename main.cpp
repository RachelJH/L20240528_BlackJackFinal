#include <iostream>
#include "Deck.h"
#include "Player.h"
#include "Person.h"
#include "Dealer.h"

using namespace std;

#define MAX3(A,B,C)	(MAX(A,B) > C ? MAX(A,B) : C )
#define MAX(A,B) ((A>B)? A : B)

int main()
{
	FDeck Deck;

	vector<FPerson*> Persons;
	Persons.push_back(new FDealer);

	Persons.push_back(new FPlayer);
	Persons.push_back(new FPlayer);
	Persons.push_back(new FPlayer);
	Persons.push_back(new FPlayer);
	Persons.push_back(new FPlayer);
	Persons.push_back(new FPlayer);


	for (int i = 0; i < Persons.size(); i++)
	{
		Persons[i]->Draw(Deck.Draw());
		Persons[i]->Draw(Deck.Draw());

	}
	for (int i = 0; i < Persons.size(); i++)
	{
		if (i == 0)
		{
			cout << "Dealer " << "Score : " 
				<< Persons[i]->Check() << endl;
		}
		else
		{
			cout << "Player " << i << " Score : " << Persons[i]->Check()
				<< ((Persons[0]->Check() <= Persons[i]->Check()) ? " Win" : " Lost")
				<< endl;

		}
		Persons[i]->Show();
	}

	
	cout << MAX3(10, 7, 11);

	return 0;
}