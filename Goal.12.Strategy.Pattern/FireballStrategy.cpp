#include <iostream>
#include "FireballStrategy.h"
#include "Object.h"
#include "Monster.h"
#include "Player.h"

FireballStrategy::FireballStrategy(Player* owner)
	: iStrategy(owner, 'f', "(f)ireball")
{
}

void FireballStrategy::execute(std::vector<std::unique_ptr<Monster>>& objects)
{
	if (owner->getSP() >= 5) {
		std::cout << "You lash out with a fireball.";
		objects[0]->defend(owner->attack());

		if (objects.size() > 1)
		{
			objects[1]->defend(owner->attack());
			if (objects.size() > 2)
				objects[2]->defend(owner->attack());
		}
		owner->cast(5);
	}
	else std::cout << "You attempt to use a fireball but the spell fizzles out.";
	
}
