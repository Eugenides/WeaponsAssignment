#include "Weapon.h"
#include "Grenade.h"

class Player
{
public:
	Player();
	~Player();

	void equipWeapon(Weapon &weapon_, int slot);

	void equipGrenade(Grenade &grenade_);

	void shootWeapon(int slot);

	void throwGrenade();

private:
	Weapon* weaponsArray[2];
	Grenade* grenade;
};

