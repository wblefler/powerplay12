#ifndef FRENZYSTRATEGY_H
#define FRENZYSTRATEGY_H
#include "iStrategy.h"
class FrenzyStrategy :
	public iStrategy
{
public:
	FrenzyStrategy() = delete;
	FrenzyStrategy(Player* owner);
	void execute(std::vector <std::unique_ptr<Monster>>& objects) override;
};

#endif // !FRENZYSTRATEGY_H