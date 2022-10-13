#include "snake.h"

using namespace std;

int main()
{
    Snake snakegame;
    unsigned ms = 10;

    srand(time(nullptr)); //seed for proper randomness
    snakegame.setup();
    while (!snakegame.getStatus())
    {
        snakegame.draw();
        snakegame.input();
        snakegame.logic();
        usleep(ms*1000);
    }
    snakegame.save_hs();
}