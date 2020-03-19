/*
#include <stdio.h>
#define SIZE 10

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize);
void display(int ar[][SIZE], int rowSize, int colSize);

// In a square matrix, add all the values below and including the row = col line and store into the row = col line respectively.
int main()
{
    int ar[SIZE][SIZE], rowSize, colSize;
    int i,j;
    printf("Enter row size of the 2D array: \n");
    scanf("%d", &rowSize);
    printf("Enter column size of the 2D array: \n");
    scanf("%d", &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &ar[i][j]);
    reduceMatrix2D(ar, rowSize, colSize);
    printf("reduceMatrix2D(): \n");
    display(ar, rowSize, colSize);
    return 0;
}

void display(int ar[][SIZE], int rowSize, int colSize)
{
    int l,m;
    for (l = 0; l < rowSize; l++) {
        for (m = 0; m < colSize; m++)
            printf("%d ", ar[l][m]);
        printf("\n");
    }
}

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize)
{
    int i, j, sum;
    // For each column
    for (i = 0; i < colSize; i++){
        sum = 0;
        // Add up all the values in the row and change the value to 0
        for (j = i; j < rowSize; j++){
            sum += ar[j][i];
            ar[j][i] = 0;
        }
        // Set the row = col line = sum
        ar[i][i] = sum;
    }
}
*/
