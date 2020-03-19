/*
#include <stdio.h>
int main()
{
    int salary, merit;
    char grade;
    printf("Enter the salary: \n");
    scanf("%d", &salary);
    printf("Enter the merit: \n");
    scanf("%d", &merit);

    // Do a switch case to test by ranges. If it is not inside, test if >= 800, if it is not, throw error.
    switch(salary){
    case 500 ... 599:
        grade = 'C';
        break;
    case 600 ... 649:
        grade = (merit < 10) ? 'C': 'B';
        break;
    case 650 ... 699:
        grade = 'B';
        break;
    case 700 ... 799:
        grade = (merit < 20) ? 'B': 'A';
        break;
    default:
        if (salary >= 800){
            grade = 'A';
        }
        else{
            printf("Error");
            return 0;
        }
    }
    printf("The grade: %c", grade);


    return 0;
}
*/

