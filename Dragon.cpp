#include "Dragon.h"



Dragon::Dragon(std::string name, int hp, int attackDamage, int attackSpeed, int exp, int coins, float movementSpeed, float lootChance)
	: Enemy(name, hp, attackDamage, attackSpeed, exp, coins, movementSpeed, lootChance)
{
}


Dragon::~Dragon()
{
}