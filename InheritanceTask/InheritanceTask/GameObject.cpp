#include "GameObject.h"
#include <iostream>


GameObject::GameObject()
	: health(100),
	name("NoName")
{
}


GameObject::~GameObject()
{
}


bool GameObject::isAlive()
{
	return health > 0;
}

void GameObject::printInfo()
{
	std::cout << "Name: " << name << "HP" << health << std::endl;
}
