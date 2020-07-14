#include <iostream>
#include "FearStrategy.h"
#include "Object.h"
#include "Monster.h"
#include "Player.h"

FearStrategy::FearStrategy(Player* owner)
	: iStrategy(owner, 'e', "f(e)ar")
{
}

void FearStrategy::execute(std::vector<std::unique_ptr<Monster>>& objects)
{
	if (owner->getSP() >= 3) {
		std::cout << "You strike the enemies with paralysing fear.";
		for (int i{ 0 }; i < objects.size(); i++) {
			std::bernoulli_distribution fearChance(.5);
			if (fearChance(Object::engine))
			{
				objects[i]->isAfraid = true;
				std::cout << objects[i] << " is struck with fear." << std::endl;
			}
			else std::cout << objects[i] << " was unfazed." << std::endl;
			
		}
		
		owner->cast(3);
	}
	else std::cout << "You attempt to use a fear spell but the spell fizzles out.";
}
