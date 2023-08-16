#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

// global variable
bool gameOver;
const int width = 20;  // عرض زمین
const int length = 20; // طول زمین
int headX, headY;      // مختصات سر
int fruitX, fruitY;    // مختصات غذا
char food = 15;
int score;
int tailX[100], tailY[100]; // مختصات خانه های دم مار
int snakeSize;              // طول مار
enum eDirection
{
  STOP = 0,
  LEFT,
  RIGHT,
  UP,
  DOWN
};
eDirection dir;
eDirection lastDir;

void setup()
{
  gameOver = false;
  dir = STOP;
  headX = width / 2;
  headY = length / 2;
  fruitX = rand() % (width - 1) + 1;
  fruitY = rand() % (length - 1) + 1;
  score = 0;
}
//
void drawMap()
{
  system("cls");
  // system("color e4");
  cout << "      _SNAKE GAME_" << endl
       << "w=up  s=down  a=left  d=right  x=exit" << endl;
  cout << "Score:" << score << endl;
  for (int i = 0; i <= width + 1; i++)
  { // دیواره بالا
    cout << "#";
  }
  cout << endl;
  for (int j = 1; j <= length; j++)
  {
    for (int i = 0; i <= width; i++)
    {
      if (i == 0)
        cout << "#"; // دیواره چپ
      if (i == headX && j == headY)
        cout << "O";
      else if (i == fruitX && j == fruitY)
        cout << food;
      else if (i == width)
        cout << "#"; // دیواره راست
      else
      {
        bool empty = true;
        for (int k = 0; k < snakeSize; k++)
        {
          if (tailX[k] == i && tailY[k] == j)
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
  for (int i = 0; i <= width + 1; i++) // دیواره پائین
    cout << "#";
  cout << endl;
}
void input()
{
  lastDir = dir;
  if (_kbhit())
  {
    switch (_getch())
    {
    case 75:
      dir = LEFT;
      break;
    case 77:
      dir = RIGHT;
      break;
    case 72:
      dir = UP;
      break;
    case 80:
      dir = DOWN;
      break;
    case 'x':
      gameOver = true;
      break;
    }
  }
}
void logic()
{
  for (int k = snakeSize; k > 0; k--)
  {
    tailX[k] = tailX[k - 1];
    tailY[k] = tailY[k - 1];
  }
  tailX[0] = headX;
  tailY[0] = headY;
  switch (dir)
  {
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

  // اتمام بازی
  if (headX == -1 || headX == width+1 || headY == length+1 || headY == -1)
  {
    gameOver = true;
    cout << "--------GAMEOVER--------";
  }
  // برخورد سرمار به بدنه مار
  for (int i = 0; i < snakeSize; i++)
  {
    if (tailX[i] == headX && tailY[i] == headY)
    {
      gameOver = true;
      cout << "--------GAMEOVER--------";
    }
  }
  if (headX == fruitX && headY == fruitY)
  {
    score += 5;
    fruitX = rand() % (width - 1) + 1;
    fruitY = rand() % (width - 1) + 1;
    snakeSize++;
  }
}

int main()
{
  setup();
  while (!gameOver)
  {
    drawMap();
    input();
    logic();
    Sleep(800);
  }
  system("pause");
  return 0;
}
