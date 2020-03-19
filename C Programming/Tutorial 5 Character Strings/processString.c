/*
#include <stdio.h>
#include <string.h>
// Need to import extra ctype.h. Can be done without, but comparison for vowels would need to check for lower and upper.
// Or you can check if it's lower, if it is, - 32
#include <ctype.h>

void processString(char *str, int *totVowels, int *totDigits);

int main()
{
    char str[50], *p;
    int totVowels, totDigits;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    processString(str, &totVowels, &totDigits);
    printf("Total vowels = %d\n", totVowels);
    printf("Total digits = %d\n", totDigits);
    return 0;
}

void processString(char *str, int *totVowels, int *totDigits)
{
    int len = strlen(str);
    int i;
    *totVowels = 0;
    *totDigits = 0;
    char ch;

    for (i = 0; i < len; i++){
        ch = *(str+i);
        // Converts all alphabets to upper for easier comparison. Can also be lower.
        ch = toupper(ch);
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            (*totVowels)++;
            continue;
        }
        if (ch >= '0' && ch <= '9'){
            (*totDigits)++;
            continue;
        }
    }
    return;
}

*/
