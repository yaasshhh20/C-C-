#include <stdio.h>
#include <stdbool.h>

#define N 4

int board[N][N];

// Function to check if a queen can be placed on board[row][col]
bool isSafe(int row, int col) {
    int i, j;

    // Check this row on left side
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;

    // Check upper diagonal on left side
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    // Check lower diagonal on left side
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

// Function to solve the N Queen problem using backtracking
bool solveNQUtil(int col) {
    // base case: If all queens are placed then return true
    if (col >= N)
        return true;

    // Consider this column and try placing this queen in all rows one by one
    for (int i = 0; i < N; i++) {
        if (isSafe(i, col)) {
            // Place this queen in board[i][col]
            board[i][col] = 1;

            // recur to place rest of the queens
            if (solveNQUtil(col + 1))
                return true;

            // If placing queen in board[i][col
            // doesn't lead to a solution then remove queen from board[i][col]
            board[i][col] = 0; // backtrack
        }
    }

    // if the queen can not be placed in any row in this column col
    // then return false
    return false;
}

// Driver Code
int main() {
    // Initialize the board
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            board[i][j] = 0;

    if (solveNQUtil(0) == false) {
        printf("Solution does not exist");
        return 0;
    }

    // Print the solution
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf(" %d ", board[i][j]);
        printf("\n");
    }
    return 0;
}
