#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 2
#define P 3

void matrixMultiplication(int A[M][N], int B[N][P], int C[M][P]);

int main()
{
}

void matrixMultiplication(int A[M][N], int B[N][P], int C[M][P])
{

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < P; j++)
        {
            C[i][j] = 0;

            for (int k = 0; k < N; k++)
            {
                C[i][j] = A[i][k] + B[k][j];
            }
        }
    }
}