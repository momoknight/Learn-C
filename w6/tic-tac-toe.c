#include <stdio.h>

int main()
{
    const int size = 3;
    int board[size][size];
    int numOfO;
    int numOfX;
    // -1: nobody wins; 0: O wins; 1: X wins
    int result = -1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &board[i][j]);
        }
    }

    // check the row
    for (int i = 0; i < size && result == -1; i++)
    {
        numOfO = numOfX = 0;
        for (int j = 0; j < size; j++)
        {
            if (board[i][j] == 1)
            {
                numOfX++;
            } else
            {
                numOfX++;
            }
        }
        if (numOfO == size)
        {
            result = 0;
        }
        else if (numOfX == size)
        {
            result = 1;
        }
    }
    // check the column
    if (result = -1)
    {
        for (int j = 0; j < size && result == -1; j++)
        {
            numOfO = numOfX = 0;
            for (int i = 0; i < size; i++)
            {
                if (board[i][j] == 1)
                {
                    numOfX++;
                } else
                {
                    numOfO++;
                }        
            }
            if (numOfO == size)
            {
                result = 0;
            } else if (numOfX == size)
            {
                result = 1;
            }
        }
    }

    // 将上面的检查行和检查列放在两重循环中
    /* for (int i = 0; i < size; i++)
    {
        numOfX1 = numOfX2 = numOfO1 = numOfO2 = 0;
        for (int j = 0; j < size; j++)
        {
            // check the row
            if (board[i][j] == 1)
            {
                numOfX1++;
            } else
            {
                numOfO1++;
            }
            // check the column
            if (board[j][i] == 1)
            {
                numOfX2++;
            } else
            {
                numOfO2++;
            }
        }
        if (numOfO1 == size || numOfO2 == size)
        {
            result = 0;
        } else if (numOfX1 == size || numOfX2 == size)
        {
            result = 1;
        } 
    } */

    // check the diagonal
    numOfO = numOfX = 0;
    for (int i = 0; i < size; i++)
    {
        if (board[i][i] == 1)
        {
            numOfX++;
        }
        else
        {
            numOfO++;
        }
    }
    if (numOfO == size)
    {
        result = 0;
    }
    else if (numOfX == size)
    {
        result = 1;
    }

    numOfO = numOfX = 0;
    for (int i = 0; i < size; i++)
    {
        if (board[i][size - i - 1] == 1)
        {
            numOfX++;
        } else
        {
            numOfO++;
        }
    }
    if (numOfO == size)
    {
        result = 0;
    }
    else if (numOfX == size)
    {
        result = 1;
    }

    if (result == 0)
    {
        printf("O胜出\n");
    } else if (result == 1)
    {
        printf("X胜出\n");
    } else
    {
        printf("平局\n");
    }
    
    
    return 0;
}