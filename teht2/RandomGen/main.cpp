#include <iostream>
#include "random.h"
#include <ctime>
using namespace std;

int main()
{
    Random olio; //tässä vaiheessa kutsuttiin
    olio.setSeed(time(0));    //luokan konstruktori

    for(int i = 0;i<10;i++)
    {
        cout<<"satunnaisluku ="<<(olio.rand()%20) + 1<<endl;
    }
    return 0;
}
