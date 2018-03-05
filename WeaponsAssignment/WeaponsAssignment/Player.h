#include "Weapon.h"
#include "Grenade.h"

class Player
{
public:
	Player();
	~Player();

	//Self explanitory basic functionality
	void equipWeapon(Weapon &weapon_, int slot);

	void equipGrenade(Grenade &grenade_);

	void shootWeapon(int slot);

	void throwGrenade();

private:
	//Private variables, only to be accessed through setters
	Weapon* weaponsArray[2];
	Grenade* grenade;
};

