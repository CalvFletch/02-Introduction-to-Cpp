#include <iostream>
#include <string>
using namespace std;

enum PotionType
{
	HEALTH,
	SPEED,
	STRENGTH,
	MAGIC,
};

struct Player 
{ 
	int health = 30; 
	int speed = 10; 
	int strength = 15; 
	int magic = 30; 
};

// Switch case for applying different types of potions and their values
Player applyPotion(PotionType type, Player player)
{
	switch (type)
	{
	case HEALTH:
		player.health = 100;
		break;
	case SPEED:
		player.speed = 50;
		player.health -= 10;
		player.strength -= 10;
		player.magic = 10;
		break;
	case STRENGTH:
		player.speed = 25;
		player.health *= 2;
		player.strength = 200;
		break;
	case MAGIC:
		player.strength = 10;
		player.magic = 100;
		break;
	default:
		break;
	}
	return player;
}

void printStats(Player input)
{
	cout << "Health: " << input.health << endl;
	cout << "Speed: " << input.speed << endl;
	cout << "Strength: " << input.strength<< endl;
	cout << "Magic: " << input.magic << endl;
}

int main()
{
	Player testPlayer;
	// Start
	printStats(testPlayer);
	// Takes potions
	applyPotion(HEALTH, testPlayer);
	applyPotion(SPEED, testPlayer);
	// End
	printStats(testPlayer);
}