#include "units.h"

int hit(Unit attacker, Unit defender){
	int damage;
	damage = attacker.attack - defender.defense;
	return damage;
}
