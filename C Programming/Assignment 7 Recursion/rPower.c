/*
#include <stdio.h>

float rPower1(float num, int p);
void rPower2(float num, int p, float *result);

// Find the power of num by recursion
int main()
{
    int power;
    float number, result;

    printf("Enter the number and power: \n");
    scanf("%f %d", &number, &power);
    printf("rPower1(): %.2f\n", rPower1(number, power));
    rPower2(number, power, &result);
    printf("rPower2(): %.2f\n", result);
    return 0;
}

// If it is 0, return 1. That is the terminal step
// If it is negative, convert num to 1/num and p to positive, then call the function again.
// If not, multiply num by p times through recursion
float rPower1(float num, int p)
{
    if (p == 0){
        return 1;
    }
    if (p <0){
        num = 1/num;
        p = -p;
        return rPower1(num, p);
    }
    else{
        return num * rPower1(num, p - 1);
    }
}

// Same, but by call by value
void rPower2(float num, int p, float *result)
{
    if (p==0){
        *result = 1;
    }
    else if(p<0){
        num = 1/num;
        p = -p;
        rPower2(num, p, result);
    }
    else{
        rPower2(num,p-1,result);
        *result *= num;
    }
}
*/
