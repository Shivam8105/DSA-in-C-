#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<char>>& board, int row, int col, char num) {
    // Check row
    for (int j = 0; j < 9; j++) {
        if (board[row][j] == num) return false;
    }
    // Check column
    for (int i = 0; i < 9; i++) {
        if (board[i][col] == num) return false;
    }
    // Check 3x3 grid
    int newRow = (row / 3) * 3;
    int newCol = (col / 3) * 3;
    for (int i = newRow; i < newRow + 3; i++) {
        for (int j = newCol; j < newCol + 3; j++) {
            if (board[i][j] == num) return false;
        }
    }
    return true;
}

bool solve(vector<vector<char>>& board, int row, int col) {
    if (row == 9) return true; // Solved

    if (board[row][col] != '.') { 
        if (col != 8) return solve(board, row, col + 1);
        else return solve(board, row + 1, 0);
    }

    for (char ch = '1'; ch <= '9'; ch++) {
        if (isValid(board, row, col, ch)) {
            board[row][col] = ch;
            if (col != 8) {
                if (solve(board, row, col + 1)) return true;
            } else {
                if (solve(board, row + 1, 0)) return true;
            }
            board[row][col] = '.'; // Backtracking
        }
    }
    return false;
}

void solveSudoku(vector<vector<char>>& board) {
    solve(board, 0, 0);
}

int main() {
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    solveSudoku(board);

    for (const auto& row : board) {
        for (char ch : row) {
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}
