/*
Tasks:

Read main.cpp
Try to run
Implement missing functions
Give names in constructors
Make loop stop if there are no more enemies

Add variables to logical places:
	int initiative; // affects who attacks first
	int attack; // affects how much damage attack does
	int nextPlayerAction; // affects how much player takes damage / deals damage
	int chosenWeapon; // affects which weapon is in use
	int armor; // affects how much damage is negated

Add functions to logical places:
	void takeDamage(int damage); // makes calculations and damages target based on given damage

Add new enemy type
*/

#include <vector>
#include <iostream>
#include "Player.h"
#include "Spider.h"
#include "Pirate.h"

int main()
{
	Player player;
	std::vector<Enemy> enemies;

	unsigned int enemyCount = 2 + rand() % 3; // make 2-4 enemies
	for (int i = 0; i < enemyCount; i++)
	{
		int random = rand() % 100;
		if (random < 20)
		{
			enemies.push_back(Pirate());
		}
		else
		{
			enemies.push_back(Spider());
		}
	}


	while (player.isAlive())
	{
		player.control();

		int enemiesAlive = 0;

		for (Enemy& e : enemies)
		{
			if (e.isAlive())
			{
				enemiesAlive++;
				e.fight(player);
			}
		}

		for (Enemy& e : enemies)
		{
			e.printInfo();
		}

		player.printInfo();
	}

	return 0;
}

