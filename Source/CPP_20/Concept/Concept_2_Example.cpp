

#include "Concept_2_Example.h"
#include <iostream>

template<typename T>
requires std::derived_from<T, Creature>
void PrintCreatureType(T* InParam)
{
	if (InParam != nullptr)
		InParam->PrintCreatureString();
}

#pragma region TestExecute
void Concept2TestExecute::Execute()
{
	std::cout << "Test : Concept_2_Example" << std::endl;

	Creature* pPlayer = new Player(100, 100, 100);
	Player* pPlayer2 = new Player(200, 200, 200);
	Monster* pMonster = new Monster(300, 300, 300);
	Weapon* pWeapon = new Weapon(10);

	PrintCreatureType(pPlayer);
	PrintCreatureType(pPlayer2);
	PrintCreatureType(pMonster);
	//PrintCreatureType(pWeapon); -> Error!

	delete pPlayer;		pPlayer = nullptr;
	delete pPlayer2;	pPlayer2 = nullptr;
	delete pMonster;	pMonster = nullptr;
	delete pWeapon;		pWeapon = nullptr;
}
#pragma endregion