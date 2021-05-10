#include "Tower.hpp" //Includes "Disk.hpp" with it

class Game
{
    private:
        Tower* theTowers[3];

    public:
        Game(); //setup our initial 3 towers with the disks on the far left
        void display(); //Display the three towers on the screen, you can do this vertically
};