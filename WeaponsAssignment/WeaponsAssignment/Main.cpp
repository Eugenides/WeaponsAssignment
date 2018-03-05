#include <iostream>
#include "Player.h"


int main(int argc, char* argv[]) {
	//Creating the player, weapons, and grenade
	Weapon w1, w2;
	Grenade grenade;
	Player player;

	//Setting the weapon types, arbitrary at the moment

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

	//Stop the window from instantly closing
	getchar();
	return 0;
}