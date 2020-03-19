/*
#include <stdio.h>
#define BLANK ' '
void saveChar(void);
int main()
{
    printf("Enter your word and end it with a space =>");
    saveChar();
    putchar('\n');
    return 0;
}
// So it prints a blank line first, followed by a blank, then the input word inversed.
void saveChar()
{
    char ch;
    ch = getchar();
    if (ch != BLANK) saveChar();

    else putchar('\n');

    putchar(ch);
}
*/
