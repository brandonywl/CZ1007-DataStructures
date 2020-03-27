/*
#include <stdio.h>
#include <string.h>

int rStrLen(char *s);

// Provide strlen in string.h by recursion
int main()
{
    char str[80];
    printf("Enter the string: \n");
    gets(str);
    printf("rStrLen(): %d\n", rStrLen(str));
    return 0;
}


// Just pass the mem address of the next char which would be in the subsequent address. Pass until
// char == '\0', then count it backwards, +1 each time
int rStrLen(char *s)
{
    if (*s == '\0') return 0;
    else return 1 + rStrLen(s+1);
}
*/
