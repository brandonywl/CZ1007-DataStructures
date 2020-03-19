/*
#include <stdio.h>
int main()
{
    int hours;
    float tax, grossPay, netPay;
    printf("Enter hours of work: \n");
    scanf("%d", &hours);
    int baseRate = 6;
    // Check if hours > 40, then return 40 * base rate + extra OT pay, if not just pay by baseRate
    grossPay = (hours > 40) ? 40 * baseRate + (hours - 40) * 1.5 * baseRate : hours * baseRate;
    // Check if within first bracket, if it is, then just * 0.1, if in second bracket, 1000 * 0.1, then (grossPay - 500) * 0.2
    // If it is in third bracket, calculate first two bracket first, rest calculate based on 30%
    tax = (grossPay < 1000) ? grossPay * 0.1 : (grossPay < 1500)? 1000 * 0.1 + (grossPay - 1000) * 0.2: 1000 * 0.1 + 500 * 0.2 + (grossPay - 1500) * 0.3;
    netPay = grossPay - tax;
    printf("Gross pay = %.2f\n", grossPay);
    printf("Tax = %.2f\n", tax);
    printf("Net pay = %.2f\n", netPay);
    return 0;
}

*/
