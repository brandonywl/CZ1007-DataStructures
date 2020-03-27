/*
#include <stdio.h>

int rCountEvenDigits1(int num);
void rCountEvenDigits2(int num, int *result);

// Count the number of even digits by recursion
int main()
{
    int number, result;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("rCountEvenDigits1(): %d\n", rCountEvenDigits1(number));
    rCountEvenDigits2(number, &result);
    printf("rCountEvenDigits2(): %d\n", result);
    return 0;
}

// No need to isolate the last digit as if the last digit is odd, %2 will return if the last digit is even or odd.
int rCountEvenDigits1(int num)
{
    if (num < 10){
        if (num%2 == 0){
            return 1;
        }
        return 0;
    }
    else{
        int count = (num%2 == 0) ? 1:0;
        return count + rCountEvenDigits1(num/10);
    }
}

void rCountEvenDigits2(int num, int *result)
{
    if (num < 10){
        *result = (num % 2 == 0) ? 1 : 0;
    }
    else{
        rCountEvenDigits2(num/10, result);
        *result += (num%2 == 0) ? 1 : 0;
    }
}
*/
