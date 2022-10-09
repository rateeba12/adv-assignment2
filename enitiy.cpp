
#include <iostream>
using namespace std;

class enitiy {

public:
	int x; int y;

	// move from location to another location 
	virtual void move() {
		int newX, newY;
		cin >> newX >> newY;
		this-> x = newX; this-> y = newY;
	}

	// the render for the player and monster is different in some case
	virtual void render(){
	    string appearance ="visible";
	}

	// the noise for the player and monster is different
	virtual void mackeNoise()=0;
};
