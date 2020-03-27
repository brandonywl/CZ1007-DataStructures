/*
#include <stdio.h>
#include <string.h>

void maxCharToFront(char *str);

int main()
{
    char str[80], *p;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("maxCharToFront(): ");
    maxCharToFront(str);
    puts(str);
    return 0;
}

void maxCharToFront(char *str)
{
    int i, len = strlen(str);
    int index = 0;
    int ch = *str;

    for(i = 1; i < len; i++){
        if (*(str+i) > ch){
            index = i;
            ch = *(str+i);
        }
    }

    for(i = index; i > 0; i--){
        *(str+i) = *(str+i-1);
    }
    *str = ch;
}
*/
