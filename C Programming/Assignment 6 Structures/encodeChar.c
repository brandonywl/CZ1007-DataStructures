/*
#include <stdio.h>
#include <string.h>

typedef struct {
    char source;
    char code;
} Rule;

void createTable(Rule *table, int *size);
void printTable(Rule *table, int size);
void encodeChar(Rule *table, int size, char *s, char *t);

int main()
{
    char s[80], t[80], dummychar, *p;
    int size, choice;
    Rule table[100];

    printf("Select one of the following options:\n");
    printf("1: createTable()\n");
    printf("2: printTable()\n");
    printf("3: encodeChar()\n");
    printf("4: exit()\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("createTable(): \n");
            createTable(table, &size);
            break;
        case 2:
            printf("printTable(): \n");
            printTable(table, size);
            break;
        case 3:
            scanf("%c",&dummychar);
            printf("Source string: \n");
            fgets(s, 80, stdin);
            if (p=strchr(s,'\n')) *p = '\0';
            encodeChar(table,size,s,t);
            printf("Encoded string: %s\n", t);
            break;
        default:
            break;
        }
    } while (choice < 4);
    return 0;
}

// Provided code
void printTable(Rule *table, int size)
{
    int i;
    for (i=0; i<size; i++)
    {
        printf("%d: %c->%c\n", i+1, table->source, table->code);
        table++;
    }
}

// Obtain the n number of rules and store inside the array
void createTable(Rule *table, int *size)
{
    int i;
    char ch;
    printf("Enter number of rules:\n");
    scanf("%d", size);
    for (i = 0; i < *size; i++){
        printf("Enter rule %d: \n", i+1);
        scanf("%c", &ch);
        printf("Enter source character:\n");
        scanf("%c", &((table[i]).source));
        scanf("%c", &ch);
        printf("Enter code character:\n");
        scanf("%c", &((table[i]).code));
    }
    return;
}

// Encode s based on rules in table, store in t
void encodeChar(Rule *table, int size, char *s, char *t)
{
    // Len t == len s
    int len = strlen(s);
    int i, j;
    for(i = 0; i < len; i++){
        char ch = *(s+i);
        // Loop through the table to check
        for (j = 0; j < size; j++){
            // If it is inside, swap the ch
            if (*(s+i) == (table+j)->source){
                ch = (table+j)->code;
                break;
            }
        }
        *(t+i) = ch;
    }
    // End the string
    *(t+len) = '\0';
}
*/

