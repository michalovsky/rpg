#pragma once
#include "Wrapper.h"
#include "StatusBar.h"
#include "Text.h"
#include "File.h"

typedef std::vector < std::pair<std::unique_ptr<Wrapper>, StatusBar>> enemyPair;

class Create
{
public:
	Create() = delete;
	static std::unique_ptr<Wrapper> createPlayer(Player & player, sf::Vector2f position);
	static void createNpc(Npc & npc, std::vector<std::unique_ptr<Wrapper>> & npcs, sf::Vector2f position);
	static void createSkeleton(Skeleton & skeleton, enemyPair & enemies, sf::Vector2f position);
	static void createSkeletonBerserker(SkeletonBerserker & skeletonBerserker, enemyPair & enemies, sf::Vector2f position);
	static void createDragon(Dragon & dragon, enemyPair & enemies, sf::Vector2f position);
	static void createProjectile(std::unique_ptr<Wrapper>& player, Projectile & projectile, std::vector<std::unique_ptr<Wrapper>> & projectiles, sf::Vector2i dimSprite);
	static void createItem(Item & item, std::vector<std::unique_ptr<Wrapper>> & items, sf::Vector2f position);
public:
	//obstacles
	static void createWorldFromTxt(std::string pathFile, std::vector<std::unique_ptr<Wrapper>> & walls, std::vector<std::unique_ptr<Wrapper>> & floor);
	static void createRoomWithFloor(int roomSizeX, int roomSizeY, sf::Vector2f position, int doorLocRight, int doorLocLeft, int doorLocTop, int doorLocDown,
		std::vector<std::unique_ptr<Wrapper>> & walls, std::vector<std::unique_ptr<Wrapper>> & floor);
	static void createRoomWithoutFloor(int roomSizeX, int roomSizeY, sf::Vector2f position, int doorLocRight, int doorLocLeft, int doorLocTop, int doorLocDown,
		std::vector<std::unique_ptr<Wrapper>> & walls);
	static void createWall(sf::Vector2f position, std::vector<std::unique_ptr<Wrapper>> & obstacles);
	static void createFloor(sf::Vector2f position, std::vector<std::unique_ptr<Wrapper>> & obstacles);
public:
	//texts
	static void createNpcMessage(std::string message, sf::Vector2f position, std::vector<std::unique_ptr<Text>> & notifications, bool longMsgLifetime = false);
	static void createDamageMessage(int message, sf::Vector2f position, std::vector<std::unique_ptr<Text>> & notifications);
	static void createLevelMessage(std::string message, std::vector<std::unique_ptr<Text>> & notifications);
};
