#include "Weapon.h"
#include <iostream>



Weapon::Weapon()
{
}


Weapon::~Weapon()
{
}

//self explanitory
void Weapon::shootWeapon() {
	printf("\n*BANG BANG BANG*");
}

//Sets the weapon type to whatever number is passed in, can be changed to an enum in the future
void Weapon::setWeaponType(int num) {
	weaponType = num;
}