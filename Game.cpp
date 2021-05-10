#include "Game.hpp" //Includes "Tower.hpp" which includes "Disk.hpp"
#include <iostream>
#include <stdlib.h>

using namespace std;

Game::Game()
{
    theTowers[0] = new Tower();
    theTowers[1] = new Tower();
    theTowers[2] = new Tower();
    Disk* d1 = new Disk(1);
    Disk* d2 = new Disk(2);
    Disk* d3 = new Disk(3);
    theTowers[0]->push(d3);
    theTowers[0]->push(d2);
    theTowers[0]->push(d1);
}

void Game::display()
{
    cout << "Tower 1" << endl;
    theTowers[0]->display();
    cout << "Tower 2" << endl;
    theTowers[1]->display();
    cout << "Tower 3" << endl;
    theTowers[2]->display();
}