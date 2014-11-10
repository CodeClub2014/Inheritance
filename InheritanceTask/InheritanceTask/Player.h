#pragma once
#include "GameObject.h"
class Player :
	public GameObject
{
public:
	enum Actions
	{
		Nothing,
		Attack,
		Defend,
		Dance
	};
	Player();
	~Player();
	void control();

	int chosenAction;
};

