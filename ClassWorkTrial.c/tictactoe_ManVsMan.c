#include<stdio.h>
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char player='X';
void drawBoard(){
    printf("\n");
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf(" %c ",board[i][j]);
        if(j<2) printf("|");
    }
    if(i<2) printf("\n---|---|---\n");
    }
    printf("\n");
}
void makeMove(){
    int move;
    printf("Player %c, enter your move: ",player);
    scanf("%d",&move);
    int row=(move-1)/3;
    int col=(move-1)%3;
    if(board[row][col]!='X' && board[row][col]!='0'){
        board[row][col]=player;
        player=(player=='X')? '0': 'X';
    }
    else{
        printf("Invalid move! Try again.\n");
        makeMove();
    }
}
char checkWin(){
    for(int i=0;i<3;i++){
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2]) return board[i][0];
        if(board[0][i]==board[1][i] &&  board[1][i]==board[2][i]) return board[0][i];
    }
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2]) return board[0][0];
    if(board[0][2]== board[1][1] && board[1][1]==board[2][0]) return board[0][2];
    return '/';
}
int main(){
char winner= '/';
for(int i=0;i<9 && winner== '/';i++){
    drawBoard();
    makeMove();
    winner=checkWin();
}
drawBoard();
if(winner== '/'){
    printf("It's a draw!\n");
}
else{
    printf("Player %c wins!\n",winner);
}
return 0;
}