/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWords(char *s);

int main()
{
    char str[50], *p;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("countWords(): %d", countWords(str));
    return 0;
}

int countWords(char *s)
{
    int count = 0;
    while(*s != '\0'){
        if (isalnum(*s)){
            s++;
            continue;
        }
        else{
            count++;
        }
        s++;
    }
    if(isalnum(*(s-1))) count++;
    return count;
}
*/
