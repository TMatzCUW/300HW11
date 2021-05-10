#include <string>
using namespace std;

class Disk
{
    private:
        int size;
        Disk* nextDisk;

    public:
        Disk(int size);
        Disk* getNextDisk();
        int getSize();
        void setNextDisk(Disk* n);
        string toString();
};