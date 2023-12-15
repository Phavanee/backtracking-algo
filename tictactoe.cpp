#include <iostream>
#include <conio.h>

using namespace std;

void displayBoard();
int playerMove();
// int playerTwo();
int modifyBoard(int gamePiece, char currentPlay);
bool checkWin();

char bp[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main(){
    char currentPlayer = 'X';
    cout << "Welcome to this tic tac toe game!" << endl;
    do{
        displayBoard();
        modifyBoard(playerMove(), currentPlayer);
        checkWin();
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        // displayBoard();
        // modifyBoard(playerTwo());
    } while(checkWin==0);

    getch();
    return 0;
}

void displayBoard(){
    cout << bp[0] << " | " << bp[1] << " | " << bp[2];
    cout << "\n---------\n";
    cout << bp[3] << " | " << bp[4] << " | " << bp[5];
    cout << "\n---------\n";
    cout << bp[6] << " | " << bp[7] << " | " << bp[8];
     
}

int playerMove(){
    int p1;
    cout << "\nWhere would you like to place your piece? ";
    cin >> p1;
    cout << "You have placed your piece on " << p1 << "\n";
    return p1;
}

// int playerTwo(){
//     int p2;
//     cout << "\nWhere would you like to place your piece (O)? ";
//     cin >> p2;
//     cout << "You have placed your piece on " << p2 << "\n";
//     return p2;
// }

// create a function that takes user input
// and modifies the tictactoe board
int modifyBoard(int gamePiece, char currentPlay){
    
    bp[gamePiece-1] = currentPlay;

    return 0;
}

bool checkWin(){
    if(bp[0]==bp[1]==bp[2] || bp[3]==bp[4]==bp[5] || bp[6]==bp[7]==bp[8] || 
    bp[0]==bp[3]==bp[6] || bp[1]==bp[4]==bp[7] || bp[2]==bp[5]==bp[8] ||
    bp[0] == bp[4] == bp[8] || bp[2] == bp[4] == bp[6]){
        cout << "We have a winner! " << endl;
        return true;
    }
    return false;
}