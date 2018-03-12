#include <iostream>
#include "Player.h"


int main(int argc, char* argv[]) {
	//Creating the player, and grenade

	Player *player = new Player;

	Grenade *grenade = new Grenade;

	//Creating and setting the weapon types, arbitrary at the moment

	Rifle *w1 = new Rifle;

	Grenade_Launcher *w2 = new Grenade_Launcher;

	//Assign the weapons and grenade to the player

	player->equipWeapon(w1, 0);

	player->equipWeapon(w2, 1);

	player->equipGrenade(grenade);

	//Shoot/throw the weapons and grenade

	player->shootWeapon(0);

	player->shootWeapon(1);

	player->throwGrenade();

	//Stop the window from instantly closing
	getchar();
	return 0;
}