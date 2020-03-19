/*
#include <stdio.h>
#define INIT_VALUE -1000

int findAr1D(int size, int ar[], int target);

// Find the first appearance of target number from left.
int main()
{
    int ar[20];
    int size, i, target, result = INIT_VALUE;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<=size-1; i++)
        scanf("%d", &ar[i]);
    printf("Enter the target number: \n");
    scanf("%d", &target);
    result = findAr1D(size, ar, target);
    if (result == -1)
        printf("findAr1D(): Not found\n");
    else
        printf("findAr1D(): %d", result);
    return 0;
}

// Traverses through and checks each one, returning the index if it can be found. -1 if not.
int findAr1D(int size, int ar[], int target)
{
    int i;
    for(i = 0; i < size; i++){
        if (ar[i] == target) return i;
    }
    return -1;
}
*/
