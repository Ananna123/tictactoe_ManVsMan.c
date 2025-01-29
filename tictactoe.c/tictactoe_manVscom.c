#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

void printBoard() {
    printf("\n\nTic-Tac-Toe\n\n");
    printf("Player [X] vs Computer [O]\n\n");
    printf("  %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf(" ---|---|---\n");
    printf("  %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf(" ---|---|---\n");
    printf("  %c | %c | %c \n\n", board[2][0], board[2][1], board[2][2]);
}

int checkWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return 1;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return 1;

    return 0;
}

int checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') return 0;
        }
    }
    return 1;
}

int minimax(int depth, int isMaximizingPlayer) {
    if (checkWin()) return isMaximizingPlayer ? -10 : 10;
    if (checkDraw()) return 0;

    int best = isMaximizingPlayer ? -1000 : 1000;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                board[i][j] = isMaximizingPlayer ? 'O' : 'X';

                int score = minimax(depth + 1, !isMaximizingPlayer);

                board[i][j] = '1' + i * 3 + j;

                best = isMaximizingPlayer ? (score > best ? score : best) : (score < best ? score : best);
            }
        }
    }

    return best;
}

int findBestMove() {
    int bestVal = -1000;
    int bestMove = -1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                board[i][j] = 'O'; 
                int moveVal = minimax(0, 0); 

                board[i][j] = '1' + i * 3 + j; 

                if (moveVal > bestVal) {
                    bestMove = i * 3 + j;
                    bestVal = moveVal;
                }
            }
        }
    }

    return bestMove;
}

void playerMove() {
    int move;
    printf("Your turn! Enter a position (1-9): ");
    scanf("%d", &move);
    if (move < 1 || move > 9) {
        printf("Invalid move. Try again.\n");
        playerMove();
    } else {
        int row = (move - 1) / 3;
        int col = (move - 1) % 3;
        if (board[row][col] != 'X' && board[row][col] != 'O') {
            board[row][col] = 'X';
        } else {
            printf("That spot is already taken. Try again.\n");
            playerMove();
        }
    }
}

void computerMove() {
    int bestMove = findBestMove();
    int row = bestMove / 3;
    int col = bestMove % 3;

    board[row][col] = 'O';
    printf("Computer plays at position %d\n", bestMove + 1);
}

int main() {
    int turn = 1;  

    while (1) {
        printBoard();

        if (turn) {
            playerMove();
            if (checkWin()) {
                printBoard();
                printf("Congratulations! You win!\n");
                break;
            }
        } else {
            computerMove();
            if (checkWin()) {
                printBoard();
                printf("Computer wins! Better luck next time.\n");
                break;
            }
        }

        if (checkDraw()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        turn = !turn;  
    }

    return 0;
}

    
       
           