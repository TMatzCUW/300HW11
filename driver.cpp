#include <iostream>
#include "Game.hpp"

using namespace std;

int main(int argc, char** argv)
{
    Game* g = new Game();
    g->display();
    return 0;
}