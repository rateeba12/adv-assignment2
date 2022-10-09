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
    
}
