//Valentin Stojanovski INKI947
#include <iostream>
using namespace std;

char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};  //formiranje na matrica 3x3
char currentPlayer = 'X';

void drawBoard() {
  cout << "   1   2   3\n";
  for (int i = 0; i < 3; i++) {
    cout << i+1 << " ";
    for (int j = 0; j < 3; j++) {
      cout << "| " << board[i][j] << " ";  //iscrtuvanje na matricata
    }
    cout << "|\n";
    cout << "  -----------\n";
  }
}

bool placeMarker(int row, int col) {
  if (row < 1 || row > 3 || col < 1 || col > 3) {   //proveruva dali e mestoto zafateno ili dali postoi toj broj na redica ili kolona
    cout << "Invalid row or column!\n";
    return false;
  }
  if (board[row-1][col-1] != ' ') {
    cout << "That spot is already taken!\n";
    return false;
  }
  board[row-1][col-1] = currentPlayer;
  return true;
}

bool checkForWin() {
  // Check rows
  for (int i = 0; i < 3; i++) {
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {   //proveruva dali e dobitna redicata
      return true;
    }
  }
  // Check columns
  for (int i = 0; i < 3; i++) {
    if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {  //proveruva dali e dobitna kolonata
      return true;
    }
  }
  // Check diagonals
  if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
    return true;
  }
  if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') { // proveruva dali se dobitni dijagonalite
    return true;
  }
  return false;
}

void changePlayer() {
  currentPlayer = currentPlayer == 'X' ? 'O' : 'X';  // se smenuva igracot
}

int main() {
  drawBoard();
  while (true) {
    int row, col;
    cout << "It's " << currentPlayer << "'s turn. Enter row (1-3): ";
    cin >> row;
    cout << "Enter column (1-3): ";                                       //se izbira pole
    cin >> col;
    if (placeMarker(row, col)) {
      drawBoard();
      if (checkForWin()) {
        cout << currentPlayer << " wins!\n";                                        // POBEDNIK!
        break;
      } else if (board[0][0] != ' ' && board[0][1] != ' ' && board[0][2] != ' ' &&
                 board[1][0] != ' ' && board[1][1] != ' ' && board[1][2] != ' ' &&
                 board[2][0] != ' ' && board[2][1] != ' ' && board[2][2] != ' ') {
        cout << "It's a tie!\n";
        break;
      } else {
        changePlayer();
      }
    }
  }
  return 0;
}
