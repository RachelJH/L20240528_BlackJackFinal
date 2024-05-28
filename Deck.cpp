#include "Deck.h"
#include "Card.h"
#include "algorithm"
#include <random>
FDeck::FDeck()
{
	for (int Type = 0; Type < 4; ++Type)
	{
		for (int Number = 1; Number <= 13; ++Number)
		{
			FCard* Temp = new FCard();
			/*switch (Type)
			{
			case 0:
				Temp->setType(ECardType::Clova);
				break;
			case 1:
				Temp->setType(ECardType::Spade);
				break;
			case 2:
				Temp->setType(ECardType::Heart);
				break;
			case 3:
				Temp->setType(ECardType::Diamond);
				break;
			default:
				break;
			}*/
			Temp->SetType(static_cast<ECardType>(Type));
			Temp->SetNumber(Number);
			Cards.push_back(Temp);
		}
	}
	CurrentPosition = (int)Cards.size()-1;
	std::random_device RandomDevice;
	std::shuffle(Cards.begin(), Cards.end(),
		std::default_random_engine(RandomDevice()));
}

FDeck::~FDeck()
{
}

void FDeck::Check()
{
	/*for (int i = 0; i < Cards.size(); i++)
	{
		Cards[i]->Show();
	}*/

	for (auto Card : Cards)
	{
		Card->Show();
	}
}

FCard* FDeck::Draw()
{
	FCard* Temp = Cards[CurrentPosition];
	CurrentPosition--;
	return Temp;
}
