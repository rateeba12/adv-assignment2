//MonsterStealth
#include <iostream>
#ifndef monsterStealth_HEADER
#define monsterStealth_HEADER
using namespace std;
#include "monster.cpp"

class monsterStealth : monster {
public:
	void hardhear() {
		mackeNoise(); //macke the noise hard to hear
	}
	void render() {
		string appearance = "invisible";
		hardhear();

	}

	void move();



};
#endif
