#include <iostream>
using namespace std;
#ifndef monsterfast
#define monsterfast
#include "monster.cpp"

class monsterfast : monster {
public:
    void fast() {
        cout << "more fast";
    }
    void move() {
        monster::move();
        fast();

    }

};
#endif