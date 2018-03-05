#include "Player.h"
#include <iostream>


Player::Player()
{
}


Player::~Player()
{
}

//Equip the weapon passed in the slot passed, if there is already a weapon there, print to screen that a weapon was replaced before replacing the old weapon with the new weapon
void Player::equipWeapon(Weapon &weapon_, int slot) {
	if (weaponsArray[slot] == nullptr) {
		weaponsArray[slot] = &weapon_;
	}
	else {
		printf("\nYou have replaced the previous weapon in slot \d with a new one.", slot);
		weaponsArray[slot] = &weapon_;
	}
}

//Equip the grenade type passed
void Player::equipGrenade(Grenade &grenade_) {
	grenade = &grenade_;
}

//If the player has a weapon, shoot it. If not, print that there is no weapon in the slot passed to the method
void Player::shootWeapon(int slot) {
	if (weaponsArray[slot] != nullptr) {
		weaponsArray[slot]->shootWeapon();
	}
	else {
		printf("\nYou can't shoot the weapon in slot \d because there is no weapon there!", slot);
	}
}

//If the player has a grenade, thhrow it. If not, print that the player has no grenades equiped
void Player::throwGrenade() {
	if (grenade != nullptr) {
		grenade->throwGrenade();
	}
	else {
		printf("\nYou can't throw a grenade because you don't have one equiped");
	}
}