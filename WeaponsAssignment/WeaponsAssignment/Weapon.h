class Weapon
{
public:
	Weapon();
	~Weapon();

	//Self explanitory basic functionality
	void shootWeapon();
	void setWeaponType(int num);

private:
	//Type of weapon
	int weaponType;
};

