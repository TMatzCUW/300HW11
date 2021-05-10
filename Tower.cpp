#include "Tower.hpp"
#include <stdlib.h>
#include <iostream>

using namespace std;

Tower::Tower()
{
    this->top = NULL;
    this->count = 0;
}

Disk* Tower::pop()
{
    if(this->count == 0)
    {
        return NULL;
    }
    else
    {
        Disk* diskToRemove = this->top;
        this->top = diskToRemove->getNextDisk();
        diskToRemove->setNextDisk(NULL);
        this->count--;
        return diskToRemove;
    }
}

Disk* Tower::peek()
{
    if(this->count == 0)
    {
        return NULL;
    }
    else
    {
        return this->top;
    }
}

void Tower::push(Disk* d)
{
    d->setNextDisk(this->top);
    this->top = d;
    this->count++;
}

void Tower::display()
{
    Disk* currDisk = this->top;
    for(int i = 0; i < this->count; i++)
    {
        cout << currDisk->toString() << endl;
        currDisk = currDisk->getNextDisk();
    }
}