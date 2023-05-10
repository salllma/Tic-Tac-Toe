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

int Init_board(int *board)
{
	int index = 0;
    int i;

	for ( i = 0; i < 25; ++i)
		board[i] = BOARDER;

	for ( i = 0; i < 9; ++i)	
		board[ConvertTo25[i]] = EMPTY;	
}

const int Print_board(const int *board) 
{
	int index = 0;
	printf("\nBoard:\n");
	for(index = 0; index < 25; ++index) {
		if(index!=0 && index%5==0) {
			printf("\n");
		}
		printf("%4d",board[index]);
	}
	printf("\n");
}

int main (void)
{

int board[25];

Init_board(board);

Print_board(board);
}

