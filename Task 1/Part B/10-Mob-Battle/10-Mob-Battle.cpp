#include <iostream>
#include <string>
using namespace std;

struct Mob
{
    int health = 100;
    int attackSkill = 10;
    int damage = 10;
    string name = "default";
};

void battle(Mob& mobA, Mob& mobB)
{
    // battle mob a and b
    while (mobA.health <= 0 && mobB.health <= 0) 
    {
        for (int round = 0; ; round++) {
            int roll = rand() % mobA.attackSkill + 1
            if (roll < 21)
            mobB.health - mobA.damage

        }

    }
}

int main()
{
    // create fella and set his values
    Mob fella;
    fella.health = 120;
    fella.attackSkill = 5;
    fella.damage = 40;
    fella.name = "fella";
    // create dude and set his values
    Mob dude;
    dude.health = 250;
    dude.attackSkill = 15;
    dude.damage = 24;
    dude.name = "dude";
    

    battle(fella, dude);
}