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

bool rollDice(Mob mob)
{
    int roll = rand() % mob.attackSkill + 1;
    return roll;
}
//function attack(attacker, defender) :
void attack(Mob attacker, Mob defender)
//    roll = random number 1 to 21
{
    int roll = rand(21);
    cout << attacker.name "hit" 
}
//    if roll <= attacker.attackSkill :
//        defender.health -= attacker.damage
//        print attacker.name " hit " defender.name " for " attacker.damage " damage!"
//    else :
//        print attacker.name " missed " defender.name

void battle(Mob& mobA, Mob& mobB)
{
    // battle mob a and b

    // while neither are 0hp
    while (mobA.health > 0 || mobB.health > 0)
    {


        if (rollDice(attacker) < 21)
           attacker.health - mobA.damage;
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