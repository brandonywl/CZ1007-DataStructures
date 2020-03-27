/*
#include <stdio.h>

void specialNumbers1D(int ar[], int num, int *size);

int main()
{
int a[20],i,size=0,num;
printf("Enter a number (between 100 and 999): \n");
scanf("%d", &num);
specialNumbers1D(a, num, &size);
printf("specialNumbers1D(): ");
for (i=0; i<size; i++)
printf("%d ",a[i]);
return 0;
}

void specialNumbers1D(int ar[], int num, int *size)
{
    int i,sum, digits, digit, count = 0;

    for (i = 100; i < num; i++){
        digits = i;
        sum = 0;
        while (digits > 0){
            digit = digits%10;
            sum += digit * digit * digit;
            digits /= 10;
        }
        if (sum == i){
            ar[count] = sum;
            count++;
            (*size)++;
        }
    }
}
*/
