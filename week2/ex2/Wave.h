
#pragma once



class Wave {
private:
	char* name;
	
	int nrofEnemies;
	int startingHealth;
	float moneyperEnemy;
public:
	
	int get_startingHealth();
	void set_startingHealth(int value);
	int get_nrofEnemies();
	void set_nrofEnemies(int value);
	float get_moneyperEnemy();
	void set_moneyperEnemy(float value);
};
