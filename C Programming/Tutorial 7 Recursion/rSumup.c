/*
#include <stdio.h>
int rSumup1(int n);
void rSumup2(int n, int *result);
// Sum up from 1 to n
int main()
{
    int n, result;
    printf("Enter a number: \n");
    scanf("%d", &n);
    printf("rSumup1(): %d\n", rSumup1(n));
    rSumup2(n, &result);
    printf("rSumup2(): %d\n",result);
    return 0;
}
int rSumup1(int n)
{
    int i, sum = 0;
    // For loop and add all i <= n from i = 1
    for(i = 1; i <=n; i++){
        sum += i;
    }
    return sum;
}
void rSumup2(int n, int *result)
{
    // Initialize result if it isnt. Reset to 0 if it is.
    if (n == 0){
        *result = 0;
        return;
    }
    // Increment by n for each call.
    else{
        rSumup2(n-1, result);
        *result += n;
        return;
    }
}
*/
