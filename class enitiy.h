#include <iostream>
using namespace std;

class enitiy{
int x,y;

public:
// move from location to another location
void move();

// the render for the player and monster is different
virtual void render()=0;

// the noise for the player and monster is different
void mackeNoise();
};
