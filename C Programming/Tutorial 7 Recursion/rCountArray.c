/*
#include <stdio.h>
#define SIZE 20
int rCountArray(int array[], int n, int a);

// Count the number of times an integer a, appears in an array sized n
int main()
{
    int array[SIZE];
    int index, count, target, size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d numbers: \n", size);
    for (index = 0; index < size; index++)
        scanf("%d", &array[index]);
    printf("Enter the target number: \n");
    scanf("%d", &target);
    count = rCountArray(array, size, target);
    printf("rCountArray(): %d\n", count);
    return 0;
}
// Start counting from the right of the array. Indexing it by n-1, until n == 1
int rCountArray(int array[], int n, int a)
{
    // Terminate at n == 0 as n = -1 doesnt make any sense, and n = 0 has been checked by the previous step
    if (n == 0){
        return 0;
    }
    else{
        int count = array[n-1] == a ? 1:0;
        return count + rCountArray(array, n-1, a);
    }
}
*/
