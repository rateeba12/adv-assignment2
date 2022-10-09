#include <iostream>
using namespace std;
#include "enitiy.cpp"
class monster {
    private:
    enitiy * Enitiy;
    public:
   
   virtual void move(){
        int newX, newY;
		cin >> newX >> newY;
		Enitiy->x = newX; Enitiy->y = newY;
   }
   
   void mackeNoise(){
       cout<<"A noise";
   }
};
