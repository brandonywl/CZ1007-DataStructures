/*
#include <stdio.h>
#define INIT_VALUE 999

int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);

int main()
{
    int number, result = INIT_VALUE;
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("extEvenDigits1(): %d\n", extEvenDigits1(number));
    extEvenDigits2(number, &result);
    printf("extEvenDigits2(): %d\n", result);
    return 0;
}

int extEvenDigits1(int num)
{
    int digit;
    int sum = 0, multiply = 1;
    while (num > 0){
        digit = num % 10;
        if (digit % 2 == 0){
            sum += digit * multiply;
            multiply *= 10;
        }
        num /= 10;
    }
    return (sum) ? sum : -1;
}

void extEvenDigits2(int num, int *result)
{
    int digit;
    int multiply = 1;
    *result = 0;

    while (num > 0){
        digit = num % 10;
        if ( digit % 2 == 0){
            *result += digit * multiply;
            multiply *= 10;
        }
        num /= 10;
    }
    if (*result == 0) *result = -1;
}
*/
