#include <iostream>
#include <string>
#include <cassert>
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

/// <summary>
/// Applies potion effect to the player modifies their stats
/// </summary>
/// <param name="type"> The type of potion being consumed </param>
/// <param name="player"> The player that is recieving the potion </param>
/// <returns> Updated player with modified stats </returns>
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

/// <summary>
/// Prints out each stat of a player to std out
/// </summary>
/// <param name="Player"> Player object </param>
void printStats(Player input)
{
	cout << "Health: " << input.health << endl;
	cout << "Speed: " << input.speed << endl;
	cout << "Strength: " << input.strength << endl;
	cout << "Magic: " << input.magic << endl << endl;
}

int main()
{
	const Player healthIn;
	Player healthOut = applyPotion(HEALTH, healthIn);
	assert(healthOut.health == 100);
	assert(healthOut.speed == 10);
	assert(healthOut.strength == 15);
	assert(healthOut.magic == 30);

	const Player speedIn;
	Player speedOut = applyPotion(SPEED, speedIn);
	assert(speedOut.health == 20);
	assert(speedOut.speed == 50);
	assert(speedOut.strength == 5);
	assert(speedOut.magic == 10);

	const Player strengthIn;
	Player strOut = applyPotion(STRENGTH, strengthIn);
	assert(strOut.health == 60);
	assert(strOut.speed == 25);
	assert(strOut.strength == 200);
	assert(strOut.magic == 30);

	const Player magicIn;
	Player magOut = applyPotion(MAGIC, magicIn);
	assert(magOut.health == 30);
	assert(magOut.speed == 10);
	assert(magOut.strength == 10);
	assert(magOut.magic == 100);


	Player printTest;
	// Start
	printStats(printTest);
	// Takes potions
	printTest = applyPotion(HEALTH, printTest);
	cout << "*Takes Health potion*\n";
	printStats(printTest);
	printTest = applyPotion(SPEED, printTest);
	cout << "*Takes Speed potion*\n";
	printStats(printTest);
	printTest = applyPotion(STRENGTH, printTest);
	cout << "*Takes Strength potion*\n";
	printStats(printTest);
	printTest = applyPotion(MAGIC, printTest);
	cout << "*Takes Magic potion*\n";
	printStats(printTest);
}