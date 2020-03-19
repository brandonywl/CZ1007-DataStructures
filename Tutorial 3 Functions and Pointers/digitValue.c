/*
#include <stdio.h>
int digitValue1(int num, int k);
void digitValue2(int num, int k, int *result);

// Return the kth digit from the right of a non-negative digit.
int main()
{
    int num, digit, result=-1;
    printf("Enter the number: \n");
    scanf("%d", &num);
    printf("Enter k position: \n");
    scanf("%d", &digit);
    printf("digitValue1(): %d\n", digitValue1(num, digit));
    digitValue2(num, digit, &result);
    printf("digitValue2(): %d\n", result);
    return 0;
}

// Automatically = 0 when k > number of digits
int digitValue1(int num, int k)
{
    int i;
    // We do k-1 as we do not want to remove the kth digit
    // When num = 1234, k = 1 should return 4
    for(i = 0; i < k-1; i++){
        num /= 10;
    }
    return num%10;
}

// Same, but done through call by reference
void digitValue2(int num, int k, int *result)
{
    int i;
    for(i=0; i<k-1; i++){
        num/=10;
    }
    *result = num%10;
}
*/
