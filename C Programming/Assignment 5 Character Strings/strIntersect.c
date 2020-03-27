/*
#include <stdio.h>

void strIntersect(char *str1, char *str2, char *str3);

int main()
{
    char str1[50],str2[50],str3[50];
    printf("Enter str1: \n");
    scanf("%s",str1);
    printf("Enter str2: \n");
    scanf("%s",str2);
    strIntersect(str1, str2, str3);
    if (*str3 == '\0')
        printf("strIntersect(): null string\n");
    else
        printf("strIntersect(): %s\n", str3);
    return 0;
}

// Iterate through str1, comparing it to str2 each time.
// If it is inside, add it to str3, count++
void strIntersect(char *str1, char *str2, char *str3)
{
    int l = strlen(str2), i;
    int count = 0;
    char *p;
    while (*str1 != '\0'){
        if (p = strchr(str2, *str1)){
            *(str3+count) = *p;
            count++;
        }
        str1++;
    }
    *(str3+count) = '\0';
}
*/
