#include "snake.h"

using namespace std;


void Snake::setup()
{
    gameOver = false;
    dir = STOP;
    x = width/2;
    y = height/2;
    nTail = 0;
    fruit();
    score = 0;
    load_hs();
}

bool Snake::getStatus(){
    return gameOver;
}

void Snake::draw()
{   
    system("cls");
    for (int i = 0; i<width+2; i++)
    {
        cout << "#";
    }
    cout << endl;
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j<width+2; j++)
        {
            if(j==0) cout << "#";

            if(i==y && j==x)
                cout << "O";
            else if (i==fruitY && j==fruitX)
                cout << "X";
            else 
            {
                bool print = false;  
                for (int k = 0; k < nTail; k++)
                {
                    if (tailX[k] == j && tailY[k] == i)
                    {
                        cout << "o";
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }
            if(j==width-1) cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i<width+2; i++)
    {
        cout << "#";
    }
    cout << endl;
    cout << "Score: " << score << endl;
    cout << "Highscore: " << hscore << endl;
}

void Snake::input()
{
    if(_kbhit())
    {
        switch(_getch())
        {
            case 'w':
                dir = UP;
                break;
            case 'a':
                dir = LEFT;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 's':
                dir = DOWN;
                break;
            case 'x':
                gameOver = true;
                break;
            default:
                break;
        }
    }
}

void Snake::logic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch(dir)
    {
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;
    }
    // if walls kill
    // if (x > width || x < 0 || y > height || y < 0)
    //     gameOver =  true;

    // if walls dont kill
    if(x >= width) x = 0; else if (x < 0) x = width -1;
    if(y >= height) y = 0; else if (y < 0) y = height -1;
    
     for(int i = 0; i<nTail; i++)
         if (tailX[i] == x && tailY[i] == y)
             gameOver = true;
    if (x == fruitX && y == fruitY)
    {
        score++;
        nTail++;
        fruit();
        highscore();
    }
        
}

void Snake::fruit()
{
        fruitX = rand() % width;
        fruitY = rand() % height;
}

void Snake::highscore()
{
    if (score <= hscore)
    {
        return;
    } else
    {
        hscore++;
    }
}

void Snake::save_hs()
{
    ofstream output("highscore.txt");
    if (!output.is_open()){
        "Unable to write to highscores";
        return;
    }
    if (score < hscore){
        output << score;
    } else {
        output << hscore;
    }
}

void Snake::load_hs()
{
    ifstream input("highscore.txt");
    if (!input.is_open()){
        "Unable to open highscores";
        return;
    }
    input >> hscore;
}