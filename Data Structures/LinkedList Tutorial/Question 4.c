// CX1007 Data Structures
// Week 9 Lab Tutorial - DynamicData-Linked Lists
// Template for Q2, Q3, and Q4

//#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

////////////////////////////////////////////////////////////

typedef struct _listnode{
	int item;
	struct _listnode *next;
} ListNode;

//////////////////////////////////////////////////////

int searchList(ListNode *head, int value);

//////////////////////////////////////////////////////

void main()

{
	ListNode *head, *p, *temp;
	int n, idx;


	head=NULL;
	p=NULL;		// pointing to the last node in the list
	printf("Enter a list of numbers, terminated by the value -1:\n");

 ////////////////////////////////////////////////////////////////////

 // Question 2
 //Write your program code here
    scanf("%d", &n);
    while (n != -1){
        if (head == NULL){
            head = malloc(sizeof(ListNode));
            p = head;
        }
        else{
            p->next = malloc(sizeof(ListNode));
            p = p->next;
        }

        p->item = n;
        p->next = NULL;
        scanf("%d", &n);
    }

    temp = head;
    printf("Current List: ");
    while(temp != NULL){
        printf("%d ", temp->item);
        temp = temp->next;
    }
    printf("\n");


//////////////////////////////////////////////////////////////////////

//search for a value in the list. Q3

	printf("Enter value to search for: ");
	scanf("%d", &n);
	idx = searchList(head,n);
	if (idx >= 0){
        printf("Value %d found at index %d\n", n, idx);
	}
	else{
        printf("Value cannot be found!\n");
	}

/////////////////////////////////////////////////////////

    //free up memory for question 4
	//this part is wrong. It will cause problems.
/*	p = head;
	while (p!= NULL) {
		free(p);
		p=p->next;
	}
*/


    // Question 4
	//rewrite the free up using temporary pointer temp.
    //Write your program code here
    ListNode *t1, *t2;
    t1 = head;
    while (t1 != NULL){
        t2 = t1->next;
        free(t1);
        t1 = t2;
    }
/////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////

int searchList(ListNode *head, int value)
{

////////////////////////////////////////////////////////////////////

 // Question 3
 //Write your program code here
    int count = -1;
    ListNode *temp;
    temp = head;
    while (temp != NULL){
        count++;
        if (temp->item == value){
            return count;
        }
        temp = temp->next;
    }
    return -1;

//////////////////////////////////////////////////////////////////////
}
