#ifndef ATTACKSTRATEGY_H
#define ATTACKSTRATEGY_H
#include "iStrategy.h"
class AttackStrategy :
	public iStrategy
{
public:
	AttackStrategy() = delete;
	AttackStrategy(Player* owner);
	void execute(std::vector <std::unique_ptr<Monster>>& objects) override;
};

#endif // !ATTACKSTRATEGY_H