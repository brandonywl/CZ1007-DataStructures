/*
#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1

int countSubstring(char str[], char substr[]);

int main()
{
    char str[80], substr[80], *p;
    int result=INIT_VALUE;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("Enter the substring: \n");
    fgets(substr, 80, stdin);
    if (p=strchr(substr,'\n')) *p = '\0';
    result = countSubstring(str, substr);
    printf("countSubstring(): %d\n", result);
    return 0;
}

int countSubstring(char str[], char substr[])
{
    char *ptr;
    ptr = &(str[0]);
    int l = strlen(&(substr[0])), i, count = 0;

    while (*ptr != '\0'){
        if (*ptr == substr[0]){
            int correct = 1;
            for (i = 0; i < l; i++){
                if (*(ptr+i) != substr[i]){
                    correct = 0;
                    break;
                }
            }
            if (correct){
                count++;
            }
        }
        ptr++;
    }
    return count;
}
*/
