#pragma once
#include "GameObject.h"
#include "Player.h"
class Enemy :
	public GameObject
{
public:
	Enemy();
	~Enemy();
	virtual void fight(GameObject& gameObject);
};

