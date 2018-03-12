#ifndef WEAPON_H
#define WEAPON_H

class Weapon
{
public:
	Weapon();
	~Weapon();

	//Self explanitory basic functionality
	virtual void shootWeapon() = 0;

private:
};


#endif // !WEAPON_H