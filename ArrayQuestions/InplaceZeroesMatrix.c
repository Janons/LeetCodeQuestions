#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


//prototypes
void setZeroes(int** matrix, int matrixSize, int* matrixColSize);



int main(){
    return 0;
}

void setZeroes(int** matrix, int matrixSize, int* matrixColSize){
    int m = matrixSize;
    int n= *matrixColSize;

    bool first_row_zero = false;
    bool first_col_zero = false;

    //check if the first row should be zero 
    for (int j =0; j<n; j++)
    {
        if(matrix[0][j] == 0)
        {
            first_row_zero = true;
            break;
        }
    }

     // Check if the first column should be zero
    for (int i = 0; i < m; i++) {
        if (matrix[i][0] == 0) {
            first_col_zero = true;
            break;
        }
    }

    // Use first row and column as markers
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;  // Mark row
                matrix[0][j] = 0;  // Mark column
            }
        }
    }

       // Zero out cells based on markers
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

     // Zero out the first row if needed
    if (first_row_zero) {
        for (int j = 0; j < n; j++) {
            matrix[0][j] = 0;
        }
    }

    // Zero out the first column if needed
    if (first_col_zero) {
        for (int i = 0; i < m; i++) {
            matrix[i][0] = 0;
        }
    }
}