#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Mob
{
    int health = 100;
    int attackSkill = 10;
    int damage = 10;
    string name = "default";
};

void attack(Mob attacker, Mob& defender) {
    int roll = rand() % 21 + 1;
    if (roll <= attacker.attackSkill) {
		defender.health -= attacker.damage;
		cout << attacker.name << " hit " << defender.name << " for " << attacker.damage << " damage!\n";
    }
    else {
        cout << attacker.name << " Missed " << defender.name << endl;
}
}

void battle(Mob& mobA, Mob& mobB) {
    int round = 0;
    while (mobA.health > 0 && mobB.health > 0) {
        round++;
		cout << "Round: " << round << endl;
        attack(mobA, mobB);
        attack(mobB, mobA);
    }
    bool draw = false;
    string victor;
    if (mobA.health <= 0 && mobB.health <= 0) {
        draw = true;
    }
    if (mobA.health > mobB.health) {
        victor = mobA.name;
    }
    if (mobA.health < mobB.health) {
        victor = mobB.name;
    }
    if (draw) {
        cout << "DRAW! Both mobs killed each other";
    }
    else {
        cout << endl << victor << " is the victor, defeated in ";
		cout << round << " rounds." << endl;
    }
}

int main()
{
    srand(time(0));
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