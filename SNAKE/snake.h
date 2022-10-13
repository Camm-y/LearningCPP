#ifndef SNAKE_H
#define SNAKE_H

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <fstream>
#include <ctime>
#include <unistd.h>
#include "windows.h"

class Snake
{
bool gameOver;
const int width = 20;
const int height = 20;
int x,y,fruitX,fruitY,score,hscore;
int tailX[100], tailY[100];
int nTail;
enum eDirection{STOP=0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

public:

bool getStatus();

void setup();

void draw();

void input();

void logic();

void fruit();

void highscore();

void save_hs();

void load_hs();

};

#endif