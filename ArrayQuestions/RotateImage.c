#include <stdio.h>
#include <stdlib.h>

void rotate(int **matrix, int matrixSize, int *matrixColSize);

int main()
{
    return 0;
}

void rotate(int **matrix, int matrixSize, int *matrixColSize)
{
    int i, j, n; // variables we will use to perform the rotation
    int **temp = (int**)malloc(matrixSize * sizeof(int*));

    //memeory allocation for the rows
    for ( int i =0; i< matrixSize; i++)
    {
        temp[i] = (int*)malloc(matrixSize * sizeof(int));    }

    // getting to the rows
    for (i = 0; i < matrixSize; i++)
    {
        for (j = 0; j < matrixColSize; j++)
        {
            // outer part
            temp = matrix;
            matrix[i][j] = matrix[j][n-1-i];
            matrix[j][n-1-i] = matrix[n-1-i][n-1-j];
            matrix[n-1-i][n-1-j] =  matrix[n-1-j][i];
            matrix[n-1-j][i] = temp;
        }
    }
}