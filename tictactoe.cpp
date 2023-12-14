// tic tac toe project
/* phase 1:
    create a function that prints out the board
    add a condition: to print out the board as long as there is no win yet
    allow it to take input from 2 users*/

#include <iostream>
#include <conio.h>

using namespace std;

void displayBoard();
int playerOne();
int playerTwo();
int modifyBoard(int gamePiece);

char bp[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main(){
    int a = 0;
    cout << "Welcome to this tic tac toe game!" << endl;
    do{
        displayBoard();
        modifyBoard(playerOne());
        displayBoard();
        modifyBoard(playerTwo());
        ++a;
    } while(a<4);
    getch();
    return 0;
}

void displayBoard(){
    for(int i=0;i<10;i++){
        cout << bp[i] << "   ";

        if((i+1)%3==0){
            cout << "\n---------\n";
        }
    }
}

int playerOne(){
    int p1;
    cout << "\nWhere would you like to place your piece (x)? ";
    cin >> p1;
    cout << "You have placed your piece on " << p1 << "\n";
    return p1;
}

int playerTwo(){
    int p2;
    cout << "\nWhere would you like to place your piece (o)? ";
    cin >> p2;
    cout << "You have placed your piece on " << p2 << "\n";
    return p2;
}

// create a function that takes user input
// and modifies the tictactoe board
int modifyBoard(int gamePiece){
    static int turn = 0;
    ++turn;

    if(turn%2!=0){
        bp[gamePiece-1]='x';
    }
    else{
        bp[gamePiece-1]='o';
    }

    return 0;
}
