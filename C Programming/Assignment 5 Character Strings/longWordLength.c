/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int longWordLength(char *s);

int main()
{
char str[80], *p;

printf("Enter a string: \n");
fgets(str, 80, stdin);
if (p=strchr(str,'\n')) *p = '\0';
printf("longWordLength(): %d\n", longWordLength(str));
return 0;
}

// Find the longest word, no space no punctuations
int longWordLength(char *s)
{
    int len = strlen(s);
    if (len == 0) return 0;
    int count = 1;
    int max = 0;
    int i;

    for(i = 1; i < len; i++){
        if (isalpha(*(s+i))){
            count++;
        }
        else{
            max = (count > max) ? count : max;
            count = 0;
        }
    }
    max = (count > max) ? count : max;
    return max;
}
*/
