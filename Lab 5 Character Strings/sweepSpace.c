/*
#include <stdio.h>
#include <string.h>
// Using string.h as the way to calculate length of string is provided in sweepSpace1

char *sweepSpace1(char *str);
char *sweepSpace2(char *str);

int main()
{
    char str[80];
    printf("Enter the string: \n");
    gets(str);
    printf("sweepSpace1(): %s\n", sweepSpace1(str));
    printf("sweepSpace2(): %s\n", sweepSpace2(str));
    return 0;
}

// I do not think we have to edit the string as it will be used later
// But I will be doing it still.
// Let i be a running counter. Don't edit i or len or it will double count
// Let j be the corrected index
char *sweepSpace1(char *str){

    int i, j, len;
    i=0; len=0;
    while (str[i]!='\0'){
        len++;
        i++;
    }
    j = 0;
    for (i=0; i < len; i++){
        if (str[i] != ' '){
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0'; // add a null character
    return str;
}

// Same, just only using * instead of []
char *sweepSpace2(char *str)
{
    int l = strlen(str);
    int i, j = 0;
    for(i = 0; i < l; i++){
        if (*(str+i) != ' '){
            *(str+j) = *(str+i);
            j++;
        }
    }
    *(str+j) = '\0';
    return str;
}
*/
