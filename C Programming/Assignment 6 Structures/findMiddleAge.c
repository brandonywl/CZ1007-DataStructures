/*
#include <stdio.h>

typedef struct {
    char name[20];
    int age;
} Person;

void readData(Person *p);
Person findMiddleAge(Person *p);

// Assumptions given by question => All 3 ages are different
// Given 3 different people, find the person with the middle age and return the person name and age
int main()
{
    Person man[3], middle;

    readData(man);
    middle = findMiddleAge(man);
    printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
    return 0;
}

void readData(Person *p)
{
    int i;
    for(i = 0; i < 3; i++){
        printf("Enter person %d: \n", i+1);
        // Assuming the name has no space with the given test cases and difficulty of this mod
        scanf("%s", ((p+i)->name));
        scanf("%d", &((p+i)->age));
    }
}

// Just do straight up comparison
// Question is not asking for scalability
Person findMiddleAge(Person *p)
{
    int first = p->age;
    int second = (p+1)->age;
    int third = (p+2)->age;

    // Variation of conditions where first would be middle
    if (((first > second) && (first < third)) || ((first < second) && (first > third)))
        return *p;
    // Variation of conditions where second would be middle
    if (((second < third) && (second > first)) || ((second > third) && (second < first)))
        return *(p+1);
    // Not first not second, must be middle
    return *(p+2);
}
*/
