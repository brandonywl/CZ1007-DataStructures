/*
#include <stdio.h>
#define SIZE 10
void diagonals2D(int ar[][SIZE], int rowSize, int colSize, int
*sum1, int *sum2);
int main()
{
    int ar[SIZE][SIZE], rowSize, colSize;
    int i, j, sum1=0, sum2=0;
    printf("Enter row size of the 2D array: \n");
    scanf("%d", &rowSize);
    printf("Enter column size of the 2D array: \n");
    scanf("%d", &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &ar[i][j]);
    diagonals2D(ar, rowSize, colSize, &sum1, &sum2);
    printf("sum1=%d; sum2=%d\n",sum1,sum2);
    return 0;
}

// Traverse the array rightward (across a row)
// sum1 starts from the top, row == col
// sum2 starts from the bottom, row = rowSize - currentCol - 1
void diagonals2D(int ar[][SIZE], int rowSize, int colSize, int
*sum1, int *sum2)
{
    int i;
    *sum1 = 0;
    *sum2 = 0;

    for(i = 0; i <rowSize; i++){
        *sum1 += ar[i][i];
        *sum2 += ar[rowSize - 1 - i][i];
    }
    return;
}
*/
