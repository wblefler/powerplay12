#include <iostream>
#include "FuryStrategy.h"
#include "Object.h"
#include "Monster.h"
#include "Player.h"

FuryStrategy::FuryStrategy(Player* owner) :
	iStrategy(owner, 'u', "f(u)ry")
{
}

void FrenzyStrategy::execute(std::vector<std::unique_ptr<Monster>>& objects)
{
	std::cout << "You strike with in a wild Fury.";
	objects[0]->defend(owner->attack() * 2);

	if (objects.size() > 1)
	{
		objects[1]->defend(owner->attack() * 2);
	}
	owner->setStrength(owner->getStrength()-1);
}
