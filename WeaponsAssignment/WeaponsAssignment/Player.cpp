#include "Player.h"
#include <iostream>


Player::Player()
{
}


Player::~Player()
{
}


void Player::equipWeapon(Weapon &weapon_, int slot) {
	if (weaponsArray[slot] != nullptr) {
		weaponsArray[slot] = &weapon_;
	}
	else {
		printf("You have replaced the previous weapon in slot \d with a new one.", slot);
		weaponsArray[slot] = &weapon_;
	}
}


void Player::equipGrenade(Grenade &grenade_) {
	grenade = &grenade_;
}


void Player::shootWeapon(int slot) {
	if (weaponsArray[slot] != nullptr) {
		weaponsArray[slot]->shootWeapon();
	}
	else {
		printf("You can't shoot the weapon in slot \d because there is no weapon there!", slot);
	}
}


void Player::throwGrenade() {
	if (grenade != nullptr) {
		grenade->throwGrenade();
	}
	else {
		printf("You can't throw a grenade because you don't have one equiped");
	}
}