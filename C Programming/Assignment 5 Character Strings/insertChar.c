
/*
#include <stdio.h>
#include <string.h>

void insertChar(char *str1, char *str2, char ch);

// Copies str1 into str2, but at every index = 3, add in a ch
int main()
{
    char a[80],b[80];
    char ch, *p;

    printf("Enter a string: \n");
    fgets(a, 80, stdin);
    if (p=strchr(a,'\n')) *p = '\0';
    printf("Enter a character to be inserted: \n");
    ch = getchar();
    insertChar(a,b,ch);
    printf("insertChar(): ");
    puts(b);
    return 0;
}

void insertChar(char *str1, char *str2, char ch)
{
    int i, j = 0;
    int len = strlen(str1);
    for(i = 0; i < len; i++){
        if (i % 3 == 0 && i != 0){
            // Add in ch at the end, add the count of j
            *(str2+j) = ch;
            j++;
        }
        *(str2+j) = *(str1+i);
        j++;
    }
    // Terminates the string with '\0'
    *(str2+j) = '\0';
}
*/
