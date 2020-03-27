/*
#include <stdio.h>

int rGcd1(int num1, int num2);
void rGcd2(int num1, int num2, int *result);

// Find the greatest common divisor of 2 numbers by recursion
int main()
{
 int n1, n2, result;
 printf("Enter 2 numbers: \n");
 scanf("%d %d", &n1, &n2);
 printf("rGcd1(): %d\n", rGcd1(n1, n2));
 rGcd2(n1, n2, &result);
 printf("rGcd2(): %d\n", result);
 return 0;
}

int rGcd1(int num1, int num2)
{
    if (num2 != 0)
        return rGcd1(num2, num1%num2);
    else{
        return num1;
    }
}

// Recursive GCD Algo
// Else divides num1 by num2 and puts it in num2.
// If num2 is 0, it means that num1 was divided completely by num2. Hence return num1 (which was num2 in prev step)
// If it is not, only the mod need to be kept for the next step of test as we know any multiple of num2 will not be useful.
void rGcd2(int num1, int num2, int *result)
{
    if (num2 == 0){
        *result = num1;
    }
    else{
        rGcd2(num2, num1%num2, result);
    }
}
*/
