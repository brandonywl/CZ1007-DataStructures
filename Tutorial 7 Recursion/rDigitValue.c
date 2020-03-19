/*
#include <stdio.h>
int rDigitValue1(int num, int k);
void rDigitValue2(int num, int k, int *result);

// Return the kth digit from the right
int main()
{
    int k;
    int number, digit;
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("Enter k position: \n");
    scanf("%d", &k);
    printf("rDigitValue1(): %d\n", rDigitValue1(number, k));
    rDigitValue2(number, k, &digit);
    printf("rDigitValue2(): %d\n", digit);
    return 0;
}

int rDigitValue1(int num, int k)
{
    int i, result = 0;
    for(i = 1; i < k; i++){
        num /= 10;
    }
    return num%10;
}

void rDigitValue2(int num, int k, int *result)
{
    // Terminal at k == 1 as the we want the k'th digit. Not going by index counting starting from 0.
    if (k == 1){
        *result = num%10;
        return;
    }
    else{
        rDigitValue2(num/10, k-1, result);
        return;
    }
}
*/
