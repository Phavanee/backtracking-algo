#include <iostream>
#include <conio.h>

using namespace std;

// tic tac toe project
/* phase 1:
    create a function that prints out the board
    add a condition: to print out the board as long as there is no win yet
    allow it to take input from 2 users*/
void displayBoard();

int main(){
    cout << "Welcome to this tic tac toe game!" << endl;
    displayBoard();
    getch();
    return 0;
}

void displayBoard(){
    cout << " 1 | 2 | 3 " << endl;
    cout << "-----------" << endl;
    cout << " 4 | 5 | 6 " << endl;
    cout << "-----------" << endl;
    cout << " 7 | 8 | 9 " << endl;
}