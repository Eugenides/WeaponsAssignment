#include <iostream>
#include "Player.h"
#include "Weapon.h"
#include "Grenade.h"


int main(int argc, char* argv[]) {
	//Creating the player, weapons, and grenade
	Weapon w1, w2;
	Grenade grenade;
	Player player;

	w1.setWeaponType(1);

	w2.setWeaponType(2);

	//Assign the weapons and grenade to the player

	player.equipWeapon(w1, 0);

	player.equipWeapon(w2, 1);

	player.equipGrenade(grenade);

	//Shoot/throw the weapons and grenade

	player.shootWeapon(0);

	player.shootWeapon(1);

	player.throwGrenade();


	getchar();
	return 0;
}