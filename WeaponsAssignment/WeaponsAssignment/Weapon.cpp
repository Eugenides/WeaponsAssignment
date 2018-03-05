#include "Weapon.h"
#include <iostream>



Weapon::Weapon()
{
}


Weapon::~Weapon()
{
}


void Weapon::shootWeapon() {
	printf("*BANG BANG BANG*");
}


void Weapon::setWeaponType(int num) {
	weaponType = num;
}