
#include <stdio.h>
#include <stdlib.h>


int main()
{


    int chessboard [8][8];
    for(int i = 0; i < 8; ++i)
    {
        for(int j = 0; j < 8; ++j)
        {
            if( (i+j )%2!=0)
            {
                chessboard[i][j] = 'X' ;
            }
            else
                chessboard[i][j] = ' ' ;
        }
    }
/*//rook
    chessboard [0][0] = 'R';
    chessboard [0][7] = 'R';
    chessboard [7][0]=  'R';
    chessboard [7][7] = 'R';

//knight
    chessboard [0][1] = 'k';
    chessboard [0][6] = 'k';
    chessboard [7][1] = 'k';
    chessboard [7][6] = 'k';

//bishop
    chessboard [0][2] = 'B';
    chessboard [0][5] = 'B';
    chessboard [7][2] = 'B';
    chessboard [7][5] = 'B';

//queen
    chessboard [0][3] = 'Q';
    chessboard [7][4] = 'Q';

//king
    chessboard [0][4] = 'K';
    chessboard [7][3] = 'K';

//pawn

    chessboard [1][0] = 'p';
    chessboard [1][1] = 'p';
    chessboard [1][2] = 'p';
    chessboard [1][3] = 'p';
    chessboard [1][4] = 'p';
    chessboard [1][5] = 'p';
    chessboard [1][6] = 'p';
    chessboard [1][7] = 'p';

    chessboard [6][0] = 'p';
    chessboard [6][1] = 'p';
    chessboard [6][2] = 'p';
    chessboard [6][3] = 'p';
    chessboard [6][4] = 'p';
    chessboard [6][5] = 'p';
    chessboard [6][6] = 'p';
    chessboard [6][7] = 'p';
*/
    for(int i = 0; i < 8; ++i)
    {
        for(int j = 0; j < 8; ++j)
        {
            printf("%c ", chessboard[i][j]);
        }
        printf("\n");
    }

    chessboard [0][1] = 'X';
    chessboard [2][2] = 'k';

    printf("\n");
    printf("\n");


    for(int i = 0; i < 8; ++i)
    {
        for(int j = 0; j < 8; ++j)
        {
            printf("%c ", chessboard[i][j]);
        }
        printf("\n");
    }


    return 0;
}



/*
 * Create a 2 dimensonal array of characters. 8x8
 * Fill the array with X and space alternating.
 * Print it out row by row. (It should resemble a chess board)
 * Designate a character for each chess peace. (Queen could be Q, King could be K, etc.)
 * Set up the start of a game.
 * Print it out again.
 * Make one move with a horse.
 * Print it again.
 */
