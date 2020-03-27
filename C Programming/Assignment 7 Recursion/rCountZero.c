/*
#include <stdio.h>

int rCountZeros1(int num);
void rCountZeros2(int num, int *result);

// Count the number of zeros by recursion
int main()
{
    int number, result;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("rCountZeros1(): %d\n", rCountZeros1(number));
    rCountZeros2(number, &result);
    printf("rCountZeros2(): %d\n", result);
    return 0;
}

// If it is less than 10, terminal step. Even if the first num == 0
// Check each digit if == 0. If it is then add one more
int rCountZeros1(int num)
{
    if (num < 10){
        if (num == 0) return 1;
        else return 0;
    }
    else{
        int count = (num%10 == 0? 1: 0);
        return count + rCountZeros1(num/10);
    }
}

// Same but by call by reference
void rCountZeros2(int num, int *result)
{
    if (num < 10){
        if (num == 0) *result = 1;
        else *result = 0;
    }
    else{
        rCountZeros2(num/10, result);
        if (num % 10 == 0) *result += 1;
    }
}
*/
