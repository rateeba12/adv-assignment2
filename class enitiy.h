#include <iostream>
using namespace std;

class enitiy {
private:
	int x, y;

public:
	// move from location to another location
	void move() {
		int newX, newY;
		cin >> newX >> newY;
		this-> x = newX; this-> y = newY;
	}

	// the render for the player and monster is different
	virtual void render() = 0;

	// the noise for the player and monster is different
	void mackeNoise() {
		// the noise
	}
};
