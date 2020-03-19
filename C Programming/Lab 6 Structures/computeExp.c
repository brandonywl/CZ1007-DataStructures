/*
#include <stdio.h>

typedef struct {
    float operand1, operand2;
    char op;
} bexpression;

float compute1(bexpression expr);
float compute2(bexpression *expr);

int main()
{
    bexpression e;
    int choice;
    printf("Select one of the following options: \n");
    printf("1: compute1()\n");
    printf("2: compute2()\n");
    printf("3: exit()\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter expression (op1 op2 op): \n");
                scanf("%f %f %c", &e.operand1, &e.operand2, &e.op);
                printf("compute1(): %.2f\n", compute1(e));
                break;
            case 2:
                printf("Enter expression (op1 op2 op): \n");
                scanf("%f %f %c", &e.operand1, &e.operand2, &e.op);
                printf("compute2(): %.2f\n", compute2(&e));
                break;
        }
    } while (choice < 3);
    return 0;
}

// Uses member operator as it is done by call by value
float compute1(bexpression expr)
{
    switch(expr.op){
    case '+':
        return expr.operand1+expr.operand2;
    case '-':
        return expr.operand1-expr.operand2;
    case '*':
        return expr.operand1*expr.operand2;
    case '/':
        return expr.operand1/expr.operand2;
    default:
        printf("Error! Invalid operation!\n");
        return 0;
    }
}

// Done by -> operator instead as it is done by call by reference
float compute2(bexpression *expr)
{
    switch(expr->op){
    case '+':
        return expr->operand1+expr->operand2;
    case '-':
        return expr->operand1-expr->operand2;
    case '*':
        return expr->operand1*expr->operand2;
    case '/':
        return expr->operand1/expr->operand2;
    default:
        printf("Error! Invalid operation!\n");
        return 0;
    }
}
*/
