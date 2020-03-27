/*
#include <stdio.h>
#include <string.h>
int locateFirstChar(char *str, char ch);

int main()
{
    char str[40], ch, *p;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("Enter the target character: \n");
    scanf("%c", &ch);
    printf("locateFirstChar(): %d\n", locateFirstChar(str, ch));
    return 0;
}

// Just loops until either end or found, return z
int locateFirstChar(char *str, char ch)
{
    int count = 0;
    while (*str != '\0'){
        if (*str == ch) return count;
        str++;
        count++;
    }
    return -1;
}
*/

