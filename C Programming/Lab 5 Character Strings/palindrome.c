/*
#include <stdio.h>
#define INIT_VALUE -1000

int palindrome(char *str);

// Check if a string is a palindrome
int main()
{
    char str[80];
    int result = INIT_VALUE;
    printf("Enter a string: \n");
    gets(str);
    result = palindrome(str);

    if (result == 1)
        printf("palindrome(): A palindrome\n");
    else if (result == 0)
        printf("palindrome(): Not a palindrome\n");
    else
        printf("An error\n");
    return 0;
}

// Fold it into half, if odd, middle is not important.
// Check left if right equal and move towards the middle if they are equal.
// If not, return 0
int palindrome(char *str)
{
    int l = strlen(str);
    int i;
    for(i = 0; i < l/2; i++){
        if(*(str+i) != *(str+l-1-i)) return 0;
    }
    return 1;
}
*/
