/*
#include <stdio.h>

void printReverse1(int ar[], int size);
void printReverse2(int ar[], int size);
void reverseAr1D(int ar[], int size);

// printReserve is to print the list in reversed order. One by index, one by de-reference.
// reverseAr1D is to reverse the list and return the reversed list
int main()
{
    int ar[80];
    int size, i;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i <= size-1; i++)
        scanf("%d", &ar[i]);
    printReverse1(ar, size);
    printReverse2(ar, size);
    reverseAr1D(ar, size);
    printf("reverseAr1D(): ");
    if (size > 0) {
        for (i=0; i<size; i++)
        printf("%d ", ar[i]);
    }
    return 0;
}

// Both answers uses a for loop from size -1 to 0
void printReverse1(int ar[], int size)
{
    int i;
    printf("printReverse1(): ");
    for(i = size-1; i >= 0; i--){
        printf("%d ", ar[i]);
    }
    printf("\n");
}
void printReverse2(int ar[], int size)
{
    int i;
    printf("printReverse2(): ");
    for(i = size -1; i>= 0; i--){
        printf("%d ", *(ar+i));
    }
    printf("\n");
}
// int / 2 will return the floor value
// No point flipping the middle value. Hence, this will work for odd and even values
void reverseAr1D(int ar[ ], int size)
{
    int i, j, temp;
    for(i=0; i<size/2; i++){
        j = (size-1) - i;
        temp = ar[j];
        ar[j] = ar[i];
        ar[i] = temp;
    }
    return;
}

*/
