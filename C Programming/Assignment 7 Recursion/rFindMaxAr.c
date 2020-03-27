/*
#include <stdio.h>

void rFindMaxAr(int *a, int size, int *max);

// Return the maximum number in an array recursively
int main()
{
    int ar[50],i,max,size;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d numbers: \n", size);
    for (i=0; i < size; i++)
    scanf("%d", &ar[i]);
    max=ar[0];
    rFindMaxAr(ar,size,&max);
    printf("rFindMaxAr(): %d\n", max);
    return 0;
}

void rFindMaxAr(int *ar, int size, int *max)
{
    // Terminate at size = 1. We will be indexing by ar[size-1] as we cannot access the first one if we dont do so.
    // Just set the first one as the max value first. We don't know if it is all negative, then setting it as 0 would result in the wrong answer
    if (size == 1){
        *max = ar[0];
        return;
    }
    else{
        rFindMaxAr(ar,size-1, max);
        *max = (ar[size-1] > *max) ? ar[size-1] : *max;
    }
}
*/
