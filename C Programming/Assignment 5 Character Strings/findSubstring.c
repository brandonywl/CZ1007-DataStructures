/*
#include <stdio.h>
#include <string.h>
#define INIT_VALUE 999

int findSubstring(char *str, char *substr);

int main()
{
    char str[40], substr[40], *p;
    int result = INIT_VALUE;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("Enter the substring: \n");
    fgets(substr, 80, stdin);
    if (p=strchr(substr,'\n')) *p = '\0';
    result = findSubstring(str, substr);
    if (result == 1)
        printf("findSubstring(): Is a substring\n");
    else if ( result == 0)
        printf("findSubstring(): Not a substring\n");
    else
        printf("findSubstring(): An error\n");
    return 0;
}
int findSubstring(char *str, char *substr)
{
    int count = 0;
    int len = 0;
    int i;
    while (*(substr + len) != '\0') len++;

    while(*str != '\0'){
        if (*str == *substr){
            int correct = 1;
            for (i = 0; i < len; i++){
                if (*(str+i) != *(substr+i)){
                    correct = 0;
                    break;
                }
            }
            if (correct) {
                return 1;
            }
        }
        str++;
    }
    return 0;
}
*/
