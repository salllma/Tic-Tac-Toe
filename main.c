#include <stdio.h>
#include "main.h"

const int NOUGHTS = 1;
const int CROSSES = 2;
const int EMPTY = 0;
const int BOARDER = 1;

const int ConvertTo25[] = 
{
	6,7,8,
	11,12,13,
	16,17,18
};

int Init_board(int board[][5])
{
    int i, j;

    for (i = 0; i < 5; ++i) {
        for (j = 0; j < 5; ++j) {
            if (i == 0 || i == 4 || j == 0 || j == 4) {
                board[i][j] = BOARDER;
            } else {
                board[i][j] = EMPTY;
            }
        }
    }
}


const int Print_board(const int board[][5])
{
    int i, j;
    printf("\nBoard:\n");
    for(i = 0; i < 5; ++i) {
        for(j = 0; j < 5; ++j) {
            printf("%4d",board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


int main (void)
{

int board[5][5];

Init_board(board);

Print_board(board);
}

