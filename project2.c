#include <stdio.h>

char board[3][3];  // The 3x3 game board

void initializeBoard();
void printBoard();
int checkWin();
int isFull();

int main() {
    int row, col, player = 1;
    int result = 0;

    initializeBoard();

    printf("=== TIC TAC TOE GAME ===\n");
    printf("Player 1: X\nPlayer 2: O\n\n");

    while (1) {
        printBoard();
        printf("Player %d, enter your move (row and column: 1-3 each): ", player);
        scanf("%d %d", &row, &col);

        // Validate move
        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
            printf(" Invalid move! Try again.\n\n");
            continue;
        }

        // Make move
        board[row - 1][col - 1] = (player == 1) ? 'X' : 'O';

        // Check for winner
        result = checkWin();
        if (result == 1) {
            printBoard();
            printf(" Player %d wins! \n", player);
            break;
        }

        // Check for draw
        if (isFull()) {
            printBoard();
            printf(" It's a draw!\n");
            break;
        }

        // Switch player
        player = (player == 1) ? 2 : 1;
    }

    return 0;
}

void initializeBoard() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

void printBoard() {
    printf("\n");
    printf("  1   2   3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  ---+---+---\n");
    }
    printf("\n");
}

int checkWin() {
    // Rows
    for (int i = 0; i < 3; i++)
        if (board[i][0] != ' ' &&
            board[i][0] == board[i][1] &&
            board[i][1] == board[i][2])
            return 1;

    // Columns
    for (int j = 0; j < 3; j++)
        if (board[0][j] != ' ' &&
            board[0][j] == board[1][j] &&
            board[1][j] == board[2][j])
            return 1;

    // Diagonals
    if (board[0][0] != ' ' &&
        board[0][0] == board[1][1] &&
        board[1][1] == board[2][2])
        return 1;

    if (board[0][2] != ' ' &&
        board[0][2] == board[1][1] &&
        board[1][1] == board[2][0])
        return 1;

    return 0;
}

int isFull() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return 0;
    return 1;
}

