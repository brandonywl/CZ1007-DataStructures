/*
#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct {
    char name[20];
    char telno[20];
} PhoneBk;

void printPB(PhoneBk *pb, int size);
int readin(PhoneBk *pb);
void search(PhoneBk *pb, int size, char *target);


// readin reads a number of persons' name and numbers, passing it into p, & return number of names entered. # signifies end of input
// printDB prints the entire database, "Empty Phonebook" if empty
// search() finds a telephone number based on input name
int main()
{
    PhoneBk s[MAX];
    char t[20], *p;
    int size=0, choice, dummychar;
    printf("Select one of the following options: \n");
    printf("1: readin()\n");
    printf("2: search()\n");
    printf("3: printPB()\n");
    printf("4: exit()\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                scanf("%c", &dummychar);
                size = readin(s);
                break;
            case 2:
                scanf("%c", &dummychar);
                printf("Enter search name: \n");
                fgets(t, 20, stdin);
                if (p=strchr(t,'\n')) *p = '\0';
                search(s,size,t);
                break;
            case 3:
                printPB(s, size);
                break;
        }
    } while (choice < 4);
    return 0;
}

// Check size first, if size == 0, print empty phonebook.
// Else, loop and print all.
void printPB(PhoneBk *pb, int size)
{
    if (size == 0){
        printf("Empty phonebook\n");
        return;
    }
    else{
        printf("The phonebook list:\n");
        int i;
        for(i = 0; i < size; i++){
            PhoneBk *curr = (pb+i);
            printf("Name: %s\n", curr->name);
            printf("Telno: %s\n", curr->telno);
        }
        return;
    }
}

// Loop until max of the array, or loop is broken with #
int readin(PhoneBk *pb)
{
    char *p;
    int count = 0;
    while (count < MAX){
        PhoneBk *curr = (pb+count);
        printf("Enter name:\n");
        fgets(curr->name, 20, stdin);
        if (p = strchr(curr->name, '\n')) *p = '\0';
        // If name == #, break
        if(strcmp(curr->name, "#") == 0){
            break;
        }

        printf("Enter tel:\n");
        fgets(curr->telno, 20, stdin);
        if (p = strchr(curr->telno, '\n')) *p = '\0';
        count++;
    }
    return count;
}

// Find the target. If it is not found, the for loop will end and Name not found will be printed
void search(PhoneBk *pb, int size, char *target)
{
    int i;
    for(i = 0; i < size; i++){
        PhoneBk *curr = pb+i;
        if (strcmp(curr->name, target) == 0){
            printf("Name = %s, Tel = %s\n", curr->name, curr->telno);
            return;
        }
    }
    printf("Name not found!\n");
    return;
}
*/
