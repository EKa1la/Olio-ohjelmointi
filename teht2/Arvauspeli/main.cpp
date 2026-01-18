#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
    int max;

    cout << "Enter the maximum number: ";
    cin >> max;

    Game game(max);
    game.play();

    return 0;
}
