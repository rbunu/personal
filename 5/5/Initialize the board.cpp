#include <iostream>
#include <vector>


const int ROWS = 6;
const int COLS = 7;


void initBoard(std::vector<std::vector<int>>& board) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            board[i][j] = 0; 
        }
    }
}


void initAvailRow(std::vector<int>& availRow) {
    for (int j = 0; j < COLS; ++j) {
        
        availRow[j] = ROWS - 1; 
    }
}


void printBoard(const std::vector<std::vector<int>>& board) {
    for (int i = 0; i < ROWS; ++i) {
        std::cout << "-----------------------------\n";
        for (int j = 0; j < COLS; ++j) {
            std::cout << "| " << board[i][j] << " ";
        }
        std::cout << "|\n";
    }
    std::cout << "-----------------------------\n";
}

int main() {
   
    std::vector<std::vector<int>> board(ROWS, std::vector<int>(COLS));
    std::vector<int> availRow(COLS); 
    
    int turnCol = 0;
    int turnRow = 0;
    int players = 2;

    initBoard(board);
    initAvailRow(availRow);


    printBoard(board);

    return 0;
}