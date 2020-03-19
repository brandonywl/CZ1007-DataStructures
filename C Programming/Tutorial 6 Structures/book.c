/*
#include <stdio.h>
#define SIZE 20

typedef struct {
    char title[81];
    char lastname[81];
    char firstname[81];
    char publisher[81];
    int day, month, year;
} Booktype;

void readBook(Booktype *book);
void printBook(Booktype book);

int main(){
    Booktype book[SIZE];
    char repeat = 'y',size=0, c;

    do {
        readBook(&book[size]);
        printf("The book information:\n");
        printBook(book[size]);
        printf("Continue ('y' or 'n'): ");
        scanf("%c", &repeat);
        // Clear the \n in the stdin buffer else the next one will have issues.
        scanf("%c", &c);
        size++;
    } while (repeat == 'y');
}

// Access by -> or *.
void readBook(Booktype *book)
{
    char *p, ch;

    // fgets takes everything until till the first \n inclusive. Need the if statement to remove all the \n
    printf("Enter the title of the book:\n");
    fgets(book->title, 81, stdin);
    if (p = strchr(book->title, '\n')) *p = '\0';

    printf("Enter the author's first name:\n");
    fgets(book->firstname, 81, stdin);
    if (p = strchr(book->firstname, '\n')) *p = '\0';

    printf("Enter the author's last name:\n");
    fgets(book->lastname, 81, stdin);
    if (p = strchr(book->lastname, '\n')) *p = '\0';

    // Can use the scanf ability to immediately split by dashes into the different variables
    printf("Enter the date as (dd-mm-yy):\n");
    scanf("%d-%d-%d", &(book->day), &(book->month), &(book->year));
    // Clear the \n that is in the stdin buffer, else the fgets below will have issue.
    scanf("%c", &ch);

    printf("Enter the publisher name:\n");
    fgets(book->publisher, 81, stdin);
    if (p = strchr(book->publisher, '\n')) *p = '\0';
}

// Just print with the variables. Access by member operator.
void printBook(Booktype book)
{
    printf("Title: %s\n", book.title);
    printf("Author: %s %s\n", book.firstname, book.lastname);
    printf("Date: %d-%d-%d\n", book.day, book.month, book.year);
    printf("Publisher: %s", book.publisher);
}

*/
