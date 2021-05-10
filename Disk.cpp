#include "Disk.hpp"
#include <stdlib.h>
#include <string>

using namespace std;

Disk::Disk(int size)
{
    this->size = size;
    this->nextDisk = NULL;
}

int Disk::getSize()
{
    return this->size;
}

Disk* Disk::getNextDisk()
{
    return this->nextDisk;
}

void Disk::setNextDisk(Disk* n)
{
    this->nextDisk = n;
}

string Disk::toString()
{
    string answer = "";
    for(int i = 0; i < this->size; i++)
    {
        answer = answer + "==";
    }
    return answer;
}