/*
#include <stdio.h>
#define SIZE 100

void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);

int main()
{
    int data[SIZE][SIZE];
    int i,j;
    int rowSize, colSize;
    printf("Enter the array size (rowSize, colSize): \n");
    scanf("%d %d", &rowSize, &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &data[i][j]);
    printf("compress2D(): \n");
    compress2D(data, rowSize, colSize);
    return 0;
}

void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)
{
    int row, col, count;

    int i, j;

    for(row = 0; row < rowSize; row++){
        count = 1;
        for(col = 0; col < colSize; col++){
            if (col + 1 == colSize){
                printf("%d %d\n", data[row][col], count);
            }
            else if(data[row][col+1] == data[row][col]){
                count++;
            }
            else{
                printf("%d %d ", data[row][col], count);
                count = 1;
            }
        }

    }
}
*/
