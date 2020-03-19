/*
#include <stdio.h>
#include <string.h>
#define INIT_VALUE 999

int stringcmp(char *s1, char *s2);

// Provides the strcmp function in string.h
int main()
{
    char source[80], target[80], *p;
    int result = INIT_VALUE;
    printf("Enter a source string: \n");
    fgets(source, 80, stdin);
    if (p=strchr(source,'\n')) *p = '\0';
    printf("Enter a target string: \n");
    fgets(target, 80, stdin);
    if (p=strchr(target,'\n')) *p = '\0';
    result = stringcmp(source, target);
    if (result == 1)
    printf("stringcmp(): greater than");
    else if (result == 0)
    printf("stringcmp(): equal");
    else if (result == -1)
    printf("stringcmp(): less than");
    else
    printf("stringcmp(): error");
    return 0;
}

int stringcmp(char *s1, char *s2)
{
    int count = 0;
    // As long as one string has a char, keep checking
    while (*(s1+count) != '\0' || *(s2+count) != '\0'){
        if (*(s1+count) > *(s2+count)){
            return 1;
        }
        else if (*(s1+count) < *(s2+count)){
            return -1;
        }
        count++;
    }
    // If both is null and haven't hit any return, it must be the same
    return 0;
}

*/
