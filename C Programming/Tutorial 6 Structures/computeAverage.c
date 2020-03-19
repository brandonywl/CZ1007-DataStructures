/*
#include <stdio.h>
#include <string.h>
struct student{
    char name[20]; /* student name */
//    double testScore; /* test score */
//    double examScore; /* exam score */
//    double total; /* total = (testScore+examScore)/2 */
/*
};

double average();

int main()
{
    printf("average(): %.2f\n", average());
    return 0;
}

double average()
{
    struct student database[50];
    int count = 0, i;
    double sum = 0;
    char *p, ch;

    while (count < 50){
        printf("Enter student name: \n");
        fgets(database[count].name, 20, stdin);
        if (p = strchr(database[count].name, '\n')) *p = '\0';
        if (strcmp(database[count].name, "END") == 0) break;
        printf("Enter test score:\n");
        scanf("%lf", &(database[count].testScore));
        printf("Enter exam score:\n");
        scanf("%lf", &(database[count].examScore));
        database[count].total = (database[count].testScore+database[count].examScore)/2;
        printf("Student %s total = %.2lf\n", database[count].name, database[count].total);
        count++;
        // To clear the \n in the stdin buffer
        scanf("%c", &ch);
    }
    if (count > 0){
        for (i = 0; i < count; i++){
            sum += database[i].total;
        }
        sum /= count;
    }
    return sum;
}

*/
