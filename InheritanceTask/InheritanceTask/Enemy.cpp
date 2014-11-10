#include "Enemy.h"


Enemy::Enemy()
{
}


Enemy::~Enemy()
{
}

void Enemy::fight(GameObject& gameObject)
{
	health -= 10;
}
