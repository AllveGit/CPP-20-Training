#pragma once

#include <cstdint>
#include <iostream>

#include "../TestExecute/ITestExecute.h"

class Concept2TestExecute : public ITestExecute
{
public:
	Concept2TestExecute() = default;
	virtual ~Concept2TestExecute() = default;

	virtual void Execute() override;
};

/* Classes for test */

class Creature
{
public:
	Creature(int InObjectID, int InMaxHP, int InMaxMP) :
		ObjectID(InObjectID), MaxHP(InMaxHP), MaxMP(InMaxMP)
	{
	}

	virtual ~Creature() = default;

	virtual void PrintCreatureString() = 0;
protected:
	int ObjectID;
	int MaxHP;
	int MaxMP;
};

class Player : public Creature
{
public:
	Player(int InObjectID, int InMaxHP, int InMaxMP) :
		Creature(InObjectID, InMaxHP, InMaxMP)
	{
	}

	virtual ~Player() = default;

	virtual void PrintCreatureString() override
	{
		std::cout << "Player" << std::endl;
	}
};

class Monster : public Creature
{
public:
	Monster(int InObjectID, int InMaxHP, int InMaxMP) :
		Creature(InObjectID, InMaxHP, InMaxMP)
	{
	}

	virtual ~Monster() = default;

	virtual void PrintCreatureString() override
	{
		std::cout << "Monster" << std::endl;
	}
};

class Weapon
{
public:
	Weapon(int InDamage) :
		Damage(InDamage)
	{
	}

	virtual ~Weapon() = default;
private:
	int Damage;
};