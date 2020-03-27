/*
#include <stdio.h>

void rReverseAr(int ar[], int size);

// Return the elements in an array recursively
int main()
{
    int array[80];
    int size, i;
    printf("Enter size: \n");
    scanf("%d", &size);
    printf("Enter %d numbers: \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);
    printf("rReverseAr(): ");
    rReverseAr(array, size);
    for (i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
    return 0;
}

void rReverseAr(int ar[], int size)
{
    // Terminate when there's only 1 or 0 left
    if (size <= 1) return;
    else{
        // Store the current digit
        int digit = ar[size-1];
        // Swap first and last digit
        ar[size-1] = ar[0];
        ar[0] = digit;

        // Skip the first one as it's already swapped
        ar++;
        // Size -2 as we need to care about 2 less each time (1st and last swapped)
        rReverseAr(ar, size-2);
    }
}
*/
