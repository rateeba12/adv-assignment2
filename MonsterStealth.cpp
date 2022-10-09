//MonsterStealth
#include <iostream>
using namespace std;

include "monster.cpp"

class monsterfast : monster {
    void fast(){
        cout<<"more fast";
    }
    void move (){
        monster::move();
        fast();
        
    }
    
    	void hardhear(){
	    monster :: mackeNoise(); //macke the noise hard to hear
	}
    	void render(){
	    string appearance ="invisible";
	    hardhear();
	    
	}
	


}
