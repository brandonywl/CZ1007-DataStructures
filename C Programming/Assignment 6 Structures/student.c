/*
#include <stdio.h>
#include <string.h>
#define SIZE 50

typedef struct {
    int id;
    char name[50];
} Student;

void inputStud(Student *s, int size);
void printStud(Student *s, int size);
int removeStud(Student *s, int *size, char *target);

int main()
{
    Student s[SIZE];
    int size=0, choice;
    char target[80], *p;
    int result;
    printf("Select one of the following options: \n");
    printf("1: inputStud()\n");
    printf("2: removeStud()\n");
    printf("3: printStud()\n");
    printf("4: exit()\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Enter size: \n");
            scanf("%d", &size);
            printf("Enter %d students: \n", size);
            inputStud(s, size);
            break;
        case 2:
            printf("Enter name to be removed: \n");
            scanf("\n");
            fgets(target, 80, stdin);
            if (p=strchr(target,'\n')) *p = '\0';
            printf("removeStud(): ");
            result = removeStud(s, &size, target);
            if (result == 0)
                printf("Successfully removed\n");
            else if (result == 1)
                printf("Array is empty\n");
            else if (result == 2)
                printf("The target does not exist\n");
            else
                printf("An error has occurred\n");
            break;
        case 3:
            printStud(s, size);
            break;
        }
    } while (choice < 4);
    return 0;
}

void inputStud(Student *s, int size)
{
    int i;
    char *p, ch;
    Student *c;
    for (i = 0; i < size; i++){
        c = s+i;
        printf("Student ID:\n");
        scanf("%d", &(c->id));
        scanf("%c", &ch);
        printf("Student Name:\n");
        fgets(c->name, 50, stdin);
        if (p = strchr(c->name, '\n')) *p = '\0';
    }
}

void printStud(Student *s, int size)
{
    int i;
    Student *c;
    printf("The current student list:\n");
    if (size == 0){
        printf("Empty array\n");
        return;
    }
    else{
        for(i = 0; i < size; i++){
            c = s+i;
            printf("Student ID: %d Student Name: %s\n", c->id, c->name);
        }
    }
}

int removeStud(Student *s, int *size, char *target)
{
    if (*size == 0) return 1;
    int i;
    Student *c, *temp;

    for(i = 0; i < *size; i++){
        c = s + i;
        // If target is found
        if (strcmp(c->name, target) == 0){
            // Finish off the loop, copying the next one to the current one
            for (; i < *size - 1; i++){
                c = s + i;
                temp = c + 1;

                c->id = temp->id;
                strcpy(c->name, temp->name);
            }
            // Decrease the size so we no longer print the last one
            (*size)--;
            return 0;
        }
    }
    // Can't find if hit here
    return 2;
}
*/
