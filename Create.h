#pragma once
#include "Wrapper.h"
#include "StatusBar.h"
#include "Skeleton.h"
#include "Projectile.h"
#include "Dragon.h"
#include "Text.h"
#include <cmath>

typedef std::vector < std::pair<std::unique_ptr<Wrapper>, StatusBar>> enemyPair;

class Create
{
public:
	Create() = delete;
	static std::unique_ptr<Wrapper> createPlayer(Player & player, sf::Vector2f position);
	static void createSkeleton(Skeleton & skeleton, enemyPair & enemies, sf::Vector2f position);
	static void createDragon(Dragon & dragon, enemyPair & enemies, sf::Vector2f position);
	static void createProjectile(std::unique_ptr<Wrapper>& player, Projectile & projectile, std::vector<std::unique_ptr<Wrapper>> & projectiles, sf::Vector2i dimSprite);
	static void createItem(Item & item, std::vector<std::unique_ptr<Wrapper>> & items, sf::Vector2f position);
	static void createSingleWall(sf::Vector2f position, std::vector<std::unique_ptr<Wrapper>> & obstacles);
	static void createWall(sf::Vector2f startPosition, sf::Vector2f endPosition, std::vector<std::unique_ptr<Wrapper>> & obstacles);
	static void createFloor(sf::Vector2f position, std::vector<std::unique_ptr<Wrapper>> & obstacles);
	static void createRoom(int roomSize, sf::Vector2f position, int doorLocRight, int doorLocLeft, int doorLocTop, int doorLocDown,
		std::vector<std::unique_ptr<Wrapper>> & walls, std::vector<std::unique_ptr<Wrapper>> & floor);
	static void createMaze(std::string * mazeArray, int rows, sf::Vector2f startPosition, std::vector<std::unique_ptr<Wrapper>> & walls);
	static void createDamageMessage(int message, sf::Vector2f position, std::vector<std::unique_ptr<Text>> & notifications);
	static void createLevelMessage(std::string message, std::vector<std::unique_ptr<Text>> & notifications);
	static void createHUDMessage(std::vector<std::unique_ptr<Text>> & HUDinfo);
};
