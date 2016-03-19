#include <iostream>

#include "GameManager/GameManager.h"

using namespace std;

int main()
{

    GameManager SquessGameManager = {false};

    SquessGameManager.StartGameLoop();

    cout << "Press any key to continue." << endl;
    int x  = 0;
    cin >> x;

    return 0;
}