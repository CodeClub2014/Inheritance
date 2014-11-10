#include <iostream>
#include "Player.h"

#pragma region Magic
int readInt()
{
	int retVal;
	bool fail;

	do {
		fail = false;
		std::string input;

		std::cout << "\nWaiting for numeric input: ";
		std::cin >> input;

		for (int i = 0; i < input.length(); ++i)
		{
			const int temp = input[i];
			if (!(48 <= temp && temp <= 57))
			{
				fail = true;
			}
		}

		retVal = atoi(input.c_str());
	} while (fail);
	std::cout << std::endl;
	return retVal;
}
#pragma endregion

Player::Player()
{
}


Player::~Player()
{
}

void Player::control()
{
	std::cout
		<< "Give instructions for player" << std::endl
		<< Attack << " to attack" << std::endl
		<< Defend << " to defend" << std::endl
		<< Dance << " to dance" << std::endl
		<< "Any other number to do nothing" << std::endl;
 
	switch (readInt())
	{
	case Attack:
		break;
	case Defend:
		break;
	case Dance:
		break;
	case Nothing:
	default :
		std::cout << "You chose to do nothing" << std::endl;
		break;
	}
}
