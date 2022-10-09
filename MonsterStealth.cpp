//MonsterStealth
#include <iostream>
using namespace std;
include "monster.cpp"

class monsterStealth : monster {

    	void hardhear(){
	    monster :: mackeNoise(); //macke the noise hard to hear
	}
    	void render(){
	    string appearance ="invisible";
	    hardhear();
	    
	}
	


};
