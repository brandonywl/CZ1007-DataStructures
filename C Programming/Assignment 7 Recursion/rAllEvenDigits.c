/*
#include <stdio.h>
#define INIT_VALUE 999

int rAllEvenDigits1(int num);
void rAllEvenDigits2(int num, int *result);

// Check if all the digits in the variable is even by recursion
int main()
{
    int number, result=INIT_VALUE;
    printf("Enter a number: \n");
    scanf("%d", &number);
    result = rAllEvenDigits1(number);
    if (result == 1)
        printf("rAllEvenDigits1(): yes\n");
    else if (result == 0)
        printf("rAllEvenDigits1(): no\n");
    else
        printf("rAllevenDigits1(): error\n");
    result=INIT_VALUE;
    rAllEvenDigits2(number, &result);
    if (result == 1)
        printf("rAllEvenDigits2(): yes\n");
    else if (result == 0)
        printf("rAllEvenDigits2(): no\n");
    else
        printf("rAllevenDigits2(): error\n");
    return 0;
}

// Both wrong

int rAllEvenDigits1(int num)
{
    if (num < 10){
        if (num % 2 == 0) return 1;
        else return 0;
    }
    else{
        // Check the until the first digit first. If any digit is not even, return 0, which would then cascade down to return 0.
        int digit = rAllEvenDigits1(num/10);
        // If statement will hit if digit = 1
        if (digit){
            if (num%2 == 0) return 1;
            else return 0;
        }
        return 0;
    }
}

void rAllEvenDigits2(int num, int *result)
{
    if (num < 10){
        if (num % 2 == 0) *result = 1;
        else *result = 0;
    }
    else{
        // Check the first few digits first.
        rAllEvenDigits2(num/10, result);
        if (*result == 0) {
            return;
        }
        else{
            if (*result)
                if (num%2 != 0) *result = 0;
            return;
        }

    }
}
*/
