// Tic Tac Toe Game in C++

// Importing the inbuild libraries in CPP
#include <iostream>
#include <stdlib.h>

using namespace std;
// Array for the board
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
// golbal variable
int choice;
int row, column;
int x, y;
char turn = 'X';
bool draw = false;

// Function to show the current status of the gaming board

void display_board()
{

    // Rander Game Board LAYOUT

    system("CLS");
    cout << "\t----------" << endl;
    cout << "\t" << board[0][0] << "  | " << board[0][1] << "  |  " << board[0][2] << endl;
    cout << "\t----------" << endl;
    cout << "\t" << board[1][0] << "  | " << board[1][1] << "  |  " << board[1][2] << endl;
    cout << "\t----------" << endl;
    cout << "\t" << board[2][0] << "  | " << board[2][1] << "  |  " << board[2][2] << endl;
    cout << "\t----------" << endl;
}

void display()
{
    system("cls");
    for (int i = 0; i < 3; i++)
    {
        cout << "-----" <<endl;
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << '|';
        }
        cout << endl;
    }
    cout << "-----" << endl;
}
// Function to get the player input and update the board

void setTurn(){
    if(turn == 'X'){
        cout << "player x is your turn - enter your number:" << endl;
    }else{
        cout << "player o is your turn - enter your number:" << endl;
    }
    int input ;
    cin >> input;
    switch(input){
        case 1: x = 0; y = 0; break;
        case 2: x = 0; y = 1; break;
        case 3: x = 0; y = 2; break;
        case 4: x = 1; y = 0; break;
        case 5: x = 1; y = 1; break;
        case 6: x = 1; y = 2; break;
        case 7: x = 2; y = 0; break;
        case 8: x = 2; y = 1; break;
        case 9: x = 2; y = 2; break;
    }

    if(turn == 'X' && board[x][y] !='O' && board[x][y] != 'X'){
        board[x][y] = 'X';
        turn = 'O';
    }else if(turn == 'O' && board[x][y] != 'X' && board[x][y] != 'O'){
        board[x][y] = 'O';
        turn = 'X';
    }else{
        cout << "please enter another cell" << endl;
    }
}

bool checkWinner(){

    // بررسی سطر ها
    for(int i =0; i < 3; i++){
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2]){
            return false;
        }
    }
    // بررسی ستون
    for(int j = 0; j< 3 ; j++){
        if(board[0][j] == board[1][j] && board[0][j] == board[2][j]){
            return false;
        }
    }
    // قطر ها
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[1][1] == board[2][0]){
        return false;
    }
    
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            if(board[x][y] != 'X' || board[x][y] !='O'){
                return true;
            }
        }
    }
    draw = true;
    return false;
} 

void player_turn()
{
    if (turn == 'X')
    {
        cout << "Player [X]  - it is your turn (enter your number): ";
    }
    else if (turn == 'O')
    {
        cout << "Player [O]  - it is your turn (enter your number):";
    }
    // Taking input from user
    // updating the board according to choice and reassigning the turn Start

    cin >> choice;

    // switch case to get which row and column will be update

    switch (choice)
    {
    case 1:
        row = 0;
        column = 0;
        break;
    case 2:
        row = 0;
        column = 1;
        break;
    case 3:
        row = 0;
        column = 2;
        break;
    case 4:
        row = 1;
        column = 0;
        break;
    case 5:
        row = 1;
        column = 1;
        break;
    case 6:
        row = 1;
        column = 2;
        break;
    case 7:
        row = 2;
        column = 0;
        break;
    case 8:
        row = 2;
        column = 1;
        break;
    case 9:
        row = 2;
        column = 2;
        break;
    default:
        cout << "Invalid Move\n";
    }

    if (turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O')
    {
        // updating the position for 'X' symbol if
        // it is not already occupied
        board[row][column] = 'X';
        turn = 'O';
    }
    else if (turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O')
    {
        // updating the position for 'O' symbol if
        // it is not already occupied
        board[row][column] = 'O';
        turn = 'X';
    }
    else
    {
        // if input position already filled
        cout << "Box already filled!n Please choose another!!nn\n";
        player_turn();
    }
    /* Ends */
}

// Function to get the game status e.g. GAME WON, GAME DRAW GAME IN CONTINUE MODE

bool play()
{
    // checking the win for Simple Rows and Simple Column
    for (int i = 0; i < 3; i++)
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
            return false;

    // checking the win for both diagonal

    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return false;

    // Checking the game is in continue mode or not
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return true;

    // Checking the if game already draw
    draw = true;
    return false;
}

// Program Main Method

int main()
{
    system("Color E4");
    cout << "\tDOZ G A M E\n";
    cout << "\tFOR 2 PLAYERS\n";
    while (checkWinner())
    {
        display();
        setTurn();
        checkWinner();
    }
    display();
    if (turn == 'X' && draw == false)
    {
        cout << "\n\tCongratulations!Player with 'O' has won the game\n";
    }
    else if (turn == 'O' && draw == false)
    {
        cout << "\n\tCongratulations!Player with 'X' has won the game\n";
    }
    else
        cout << "\n\tGAME DRAW!!!\n";
    system("pause");
    return 0;
}