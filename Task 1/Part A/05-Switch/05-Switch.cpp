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
	const Player healthPlayer;
	Player resultHealthPlayer = applyPotion(HEALTH, healthPlayer);
	assert(resultHealthPlayer.health == 100);
	assert(resultHealthPlayer.speed == 10);
	assert(resultHealthPlayer.strength == 15);
	assert(resultHealthPlayer.magic == 30);

	const Player speedPlayer;
	Player resultSpeedPlayer = applyPotion(SPEED, speedPlayer);
	assert(resultSpeedPlayer.health == 20);
	assert(resultSpeedPlayer.speed == 50);
	assert(resultSpeedPlayer.strength == 5);
	assert(resultSpeedPlayer.magic == 10);

	const Player strengthPlayer;
	Player resultStrengthPlayer = applyPotion(STRENGTH, strengthPlayer);
	assert(resultStrengthPlayer.health == 60);
	assert(resultStrengthPlayer.speed == 25);
	assert(resultStrengthPlayer.strength == 200);
	assert(resultStrengthPlayer.magic == 30);

	const Player magicPlayer;
	Player resultMagicPlayer = applyPotion(MAGIC, magicPlayer);
	assert(resultMagicPlayer.health == 30);
	assert(resultMagicPlayer.speed == 10);
	assert(resultMagicPlayer.strength == 10);
	assert(resultMagicPlayer.magic == 100);


	Player testPlayer;
	// Start
	printStats(testPlayer);
	// Takes potions
	testPlayer = applyPotion(HEALTH, testPlayer);
	cout << "*Takes Health potion*\n";
	printStats(testPlayer);
	testPlayer = applyPotion(SPEED, testPlayer);
	cout << "*Takes Speed potion*\n";
	printStats(testPlayer);
	testPlayer = applyPotion(STRENGTH, testPlayer);
	cout << "*Takes Strength potion*\n";
	printStats(testPlayer);
	testPlayer = applyPotion(MAGIC, testPlayer);
	cout << "*Takes Magic potion*\n";
	printStats(testPlayer);


}