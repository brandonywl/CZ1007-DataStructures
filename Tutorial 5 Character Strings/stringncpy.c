/*
#include <stdio.h>
#include <string.h>
char *stringncpy(char *s1, char *s2, int n);

// Copy not more than n chars of s2 into s1. If s2 is shorter, fill until n with null.
int main()
{
    char targetStr[40], sourceStr[40], *target, *p;
    int length;
    printf("Enter the string: \n");
    fgets(sourceStr, 40, stdin);
    if (p=strchr(sourceStr,'\n')) *p = '\0';
    printf("Enter the number of characters: \n");
    scanf("%d", &length);
    target = stringncpy(targetStr, sourceStr, length);
    printf("stringncpy(): %s\n", target);
    return 0;
}

// Copy the first n char of s2 into s1. If len(s2) < n, pad the rest with \0
char *stringncpy(char *s1, char *s2, int n)
{
    int l1 = strlen(s1);
    int l2 = strlen(s2);

    int i;
    // If n is lesser than or equal to the length
    if (n <= l2){
        for (i = 0; i < n; i++){
            *(s1+i) = *(s2+i);
        }
    }
    else{
        for(i = 0; i < l2; i++){
            *(s1+i) = *(s2+i);
        }
        // Padding
        for(i = l2; i < n; i++){
            *(s1+i) = '\0';
        }
    }
    // To ensure programme correctness
    *(s1+n) = '\0';
    return s1;
}
*/

