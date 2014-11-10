#pragma once
#include "Enemy.h"
class Pirate :
	public Enemy
{
public:
	enum Weapon
	{
		Axe,
		Cutlass,
		Dagger,
		Pistol,
		Count
	};
	Pirate();
	~Pirate();
};

