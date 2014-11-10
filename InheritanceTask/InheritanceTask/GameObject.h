#pragma once
#include <string>
class GameObject
{
public:
	GameObject();
	~GameObject();

	virtual bool isAlive();
	virtual void printInfo();

protected:
	std::string name;
	int health;
};

