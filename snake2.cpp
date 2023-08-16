#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

// global variable
bool gameOver;
const int width = 22;
const int length = 22;
int headX, headY, fruitX, fruitY, score;
int tailX[100], tailY[100];
int snakeSize;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;
eDirection lastDir;

void Setup(){
    gameOver = false;
    dir = STOP;
    headX = width / 2;
    headY = length / 2;
    fruitX = rand() % (width-1) + 1;
    fruitY = rand() % (length-1) + 1;
    score = 0;
}
// 
void Draw(){
    system("cls");
    cout << "      _SNAKE GAME_" << endl << "w=up  s=down  a=left  d=right  x=exit" << endl;
    cout << "Score:" << score << endl;
    for (int i = 0; i <= width+1; i++)
        cout << "#";
    cout << endl;
    for (int i = 1; i < length; i++){
        for (int j = 0; j <= width; j++){
            if (j == 0)
                cout << "#";
            if (i == headY && j == headX)
                cout << "O";
            else if (i == fruitY && j == fruitX)
                cout << "F";
            else if (j == width)
                cout << "#";
            else{
                bool empty = true;
                for (int k = 0; k < snakeSize; k++)
                {
                    if (tailX[k] == j && tailY[k] == i)
                    {
                        cout << "o";
                        empty = false;
                    }
                }
                if (empty)
                    cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i <= width+1; i++)
        cout << "#";
    cout << endl;
}
void Input(){
	lastDir = dir;
    if (_kbhit()){
        switch (_getch()){
            case 'a':
                dir = LEFT;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 'w':
                dir = UP;
                break;
            case 's':
                dir = DOWN;
                break;
            case 'x':
                gameOver = true;
                break;
        }
    }
}
void Logic(){
	for(int k=snakeSize; k>0; k--){
        tailX[k]=tailX[k-1];
        tailY[k]=tailY[k-1];
    }
    tailX[0] = headX;
    tailY[0] = headY;
    switch (dir){
        case LEFT:
            headX--;
            break;
        case RIGHT:
            headX++;
            break;
        case UP:
            headY--;
            break;
        case DOWN:
            headY++;
            break;
        case STOP:
            break;
    }
    
    if(headX == -1 || headX == width || headY == length || headY == -1){
    	gameOver = true;
        cout << "-GAMEOVER-";
    }

    for (int i = 0; i < snakeSize; i++)
        if (tailX[i] == headX && tailY[i] == headY){
            gameOver = true;
            cout << "-GAMEOVER-";
        }

    if (headX == fruitX && headY == fruitY){
        score++;
        fruitX = rand() % width;
        fruitY = rand() % length;
        snakeSize++;
    }
}

int main(){
    Setup();
    while (!gameOver){
        Draw();
        Input();
        Logic();
        Sleep(200);
    }
}

