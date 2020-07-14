#ifndef FIREBALLSTRATEGY_H
#define FIREBALLSTRATEGY_H
#include "iStrategy.h"
class FireballStrategy :
	public iStrategy
{
public:
	FireballStrategy() = delete;
	FireballStrategy(Player* owner);
	void execute(std::vector <std::unique_ptr<Monster>>& objects) override;
};

#endif // !FIREBALLSTRATEGY_H