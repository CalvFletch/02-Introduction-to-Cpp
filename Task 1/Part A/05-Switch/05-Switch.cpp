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
	cout << "Magic: " << input.magic << endl;
}

int main()
{
	Player testPlayer;
	// Start
	printStats(testPlayer);
	// Takes potions
	testPlayer = applyPotion(HEALTH, testPlayer);
	testPlayer = applyPotion(SPEED, testPlayer);
	// End
	printStats(testPlayer);
}