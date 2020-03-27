// CE1007/CZ1007 Data Structures
// Week 10 Lab Tutorial - Linked List

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////
////////////

typedef struct _listnode{
	int num;
	struct _listnode *next;
} ListNode;

typedef struct _linkedlist{
	ListNode *head;
	int size;
} LinkedList;

typedef struct _dbllistnode{
	int num;
	struct _dbllistnode *pre;
	struct _dbllistnode *next;
} DblListNode;

////////////////////////////////////////////////////////////////////
////////////
int removeNode(ListNode **ptrHead, int index);
int removeNode2(LinkedList *ll, int index);
int split(ListNode *head, ListNode **ptrEvenList, ListNode **ptrOddList);
int duplicateReverse(ListNode *head, ListNode **ptrNewHead);

void printList(ListNode *head);
ListNode * findNode(ListNode *head, int index);
int insertNode(ListNode **ptrHead, int index, int value);


// these are for the practice questions
int moveMaxToFront(ListNode **ptrHead);
int concatenate(ListNode **ptrHead1, ListNode *head2);
int combineAlternating(ListNode **ptrHead, ListNode *head1, ListNode *head2);
int insertDbl(DblListNode **ptrHead, int index, int value);
void printDblList(DblListNode *head);

////////////////////////////////////////////////////////////////////
////////////

int main()
{
	int i;
	ListNode *head = NULL;
	ListNode *dupRevHead = NULL;
	ListNode *oddHead = NULL;
	ListNode *evenHead = NULL;
	ListNode *list1Head = NULL, *list2Head = NULL;
	ListNode *combAltHead = NULL;
	DblListNode *dblHead = NULL;
	LinkedList llist;
	int size = 0;

	//build a linked list
	if (insertNode(&head, 0, 6) == 0) size++;
	if (insertNode(&head, 0, 4) == 0) size++;
	if (insertNode(&head, 0, 2) == 0) size++;
	printf("After inserting 3 values.");
	printList(head);


	//removeNode(): question 1
	if (removeNode(&head, 3) == 0) size--;//this one can't be removed.
	if (removeNode(&head, 1) == 0) size--;
	if (removeNode(&head, 0) == 0) size--;

	printf("\nafter remove using removeNode(), ");
	printList(head);

	//insert some nodes
	if (insertNode(&head, 2, 3) == 0) size++; // this one can't be inserted.
	if (insertNode(&head, 1, 1) == 0) size++;
	if (insertNode(&head, 0, 0) == 0) size++;

	printf("\nafter insert, ");
	printList(head);

	//removeNode2(): question 2
	llist.head = head;
	llist.size = size;
	removeNode2(&llist, 2);
	removeNode2(&llist, 0);
	removeNode2(&llist, 0);
	head = llist.head;


	printf("\nafter remove using removeNode2(), ");
	printList(llist.head);
	// empty linked list now

	//split(): question 3
	for (i = 1; i <10; i++)//build a new linked list
		insertNode(&head, 0, i);
	printf("\n\ninsert 1-9 to the linked list,");
	printList(head);
	printf("split the current list, results:\n");
	split(head, &evenHead, &oddHead);
	printf("the even list");
	printList(evenHead);
	printf("the odd list");
	printList(oddHead);

	//duplicateReverse(): question 4
	printf("\n");
	printList(head);
	duplicateReverse(head, &dupRevHead);
	printf("After duplicateReverse(),");
	printList(dupRevHead);

	////////////////////////////////////////////////////////////////////////
	//the following are for the PRACTICE QUESTIONS

	printf("\n\nNow for the practice questions");

	//1.moveMaxToFront()
	printf("\n************** moveMaxToFront *******************\n");
	printList(head);
	moveMaxToFront(&head);
	printf("after moveMaxToFront()");
	printList(head);

	//2. concatenate()
	printf("\n************** concatenate() *******************\n");
	concatenate(&head, dupRevHead);
	printf("concatenate(current list, duplicate reverse list)\n  ");
	printList(head);

	//3.combineAlternating()
	printf("\n************** combineAlternating() *******************\n");
	for (i = 3; i > 0; i--)				//build linked list 1
		insertNode(&list1Head, 0, i);
	for (i = 13; i > 10; i--)			//build linked list 2
		insertNode(&list2Head, 0, i);
	printf("List 1:");
	printList(list1Head);
	printf("List 2: ");
	printList(list2Head);
	combineAlternating(&combAltHead, list1Head, list2Head);
	printf("After combineAlternating(): ");
	printList(combAltHead);

	//4. insertDbl()
	printf("\n************** insertDbl() *******************\n");
	printf("insertDbl()\nDoubly-linked list: ");
	insertDbl(&dblHead, 0, 10);
	insertDbl(&dblHead, 0, 20);
	insertDbl(&dblHead, 1, 30);
	insertDbl(&dblHead, 2, 40);
	printDblList(dblHead);
	return 0;
}

////////////////////////////////////////////////////////////////////
////////////

void printList(ListNode *head){
	ListNode *cur = head;

	if (cur == NULL)
		return;

	printf("the current linked list is:\n");
	while (cur != NULL){
		printf("%d ", cur->num);
		cur = cur->next;
	}
	printf("\n");
}

void printDblList(DblListNode *head){
	if (head == NULL) return;
	while (head != NULL){
		printf("%d ", head->num);
		head = head->next;
	}
	printf("\n");
}

ListNode * findNode(ListNode *head, int index){
	if (head == NULL || index < 0) return NULL;
	while (index > 0){
		head = head->next;
		if (head == NULL)
			return NULL;
		index--;
	}
	return head;
}


int insertNode(ListNode **ptrHead, int index, int value){
	ListNode *pre, *cur;
	// If empty list or inserting first node, need to update head pointer
	if (*ptrHead == NULL || index == 0){
		cur = *ptrHead;
		*ptrHead = malloc(sizeof(ListNode));
		(*ptrHead)->num = value;
		(*ptrHead)->next = cur;
		return 0;
	}
	// Find the nodes before and at the target position
	// Create a new node and reconnect the links
	if ((pre = findNode(*ptrHead, index - 1)) != NULL){
		cur = pre->next;
		pre->next = malloc(sizeof(ListNode));
		pre->next->num = value;
		pre->next->next = cur;
		return 0;
	}
	return -1;
}

////////////////////////////////////////////////////////////////////
////////////

int removeNode(ListNode **ptrHead, int index){
	if (index < 0 || *ptrHead == NULL) return -1;

	if (index == 0){
        ListNode *temp = *ptrHead;
        *ptrHead = temp->next;
        free(temp);
        temp = NULL;
	}
	else{
        ListNode *prev = findNode(*ptrHead, index-1);
        if (prev == NULL) return -1;
        ListNode *temp = prev->next;
        if (temp == NULL) return -1;
        prev->next = temp->next;
        free(temp);
        temp = NULL;
	}
	return 0;
}

////////////////////////////////////////////////////////////////////////////////
////////////

int removeNode2(LinkedList *ll, int index) {
    if (ll->head == NULL || index < 0) return -1;

    if (index == 0){
        ListNode *temp = ll->head;
        ll->head = temp->next;
        ll->size -= 1;
        free(temp);
        temp = NULL;
        return 0;
    }
    else{
        ListNode *prev = findNode(ll->head, index-1);
        if (prev == NULL) return -1;
        ListNode *temp = prev->next;
        if (temp == NULL) return -1;
        prev->next = temp->next;
        free(temp);
        temp = NULL;
        ll->size -= 1;
        return 0;
    }
}



int split(ListNode *head, ListNode **ptrEvenList, ListNode **ptrOddList)
{
    if (head == NULL) return -1;

    ListNode *oddTemp, *evenTemp;
    int digit;
    while (head != NULL){
        digit = head->num;

        if (digit % 2){
            if (*ptrOddList == NULL){
                *ptrOddList = malloc(sizeof(ListNode));
                oddTemp = *ptrOddList;
            }
            else{
                oddTemp->next = malloc(sizeof(ListNode));
                oddTemp = oddTemp->next;
            }

            oddTemp->num = digit;
            oddTemp->next = NULL;
        }
        else{
            if (*ptrEvenList == NULL){
                *ptrEvenList = malloc(sizeof(ListNode));
                evenTemp = *ptrEvenList;
            }
            else{
                evenTemp->next = malloc(sizeof(ListNode));
                evenTemp = evenTemp->next;
            }

            evenTemp->num = digit;
            evenTemp->next = NULL;
        }

        head = head->next;
    }
    return 0;
}

int duplicateReverse(ListNode *head, ListNode **ptrNewHead){
    if (head == NULL) return -1;
    while (head != NULL){
        insertNode(ptrNewHead, 0, head->num);
        head = head->next;
    }
    return 0;
}

////////////////////////////////////////////////////////////////////
////////////

int moveMaxToFront(ListNode **ptrHead){

    if (*ptrHead == NULL) return -1;
    ListNode *temp = *ptrHead;
    int count = 0, maxIndex = 0, max = temp->num;

    while (temp != NULL){
        if (temp->num > max){
            maxIndex = count;
            max = temp->num;
        }
        temp = temp->next;
        count++;
    }
    removeNode(ptrHead, maxIndex);
    insertNode(ptrHead, 0, max);
    return 0;
}


int concatenate(ListNode **ptrHead1, ListNode *head2){
    if (*ptrHead1 == NULL) {
        *ptrHead1 = head2;
        return 0;
    }
    else if (head2 == NULL) return 0;
    else{
        ListNode *tail = *ptrHead1;
        int count = 0;
        while (tail != NULL){
            tail = tail->next;
            count++;
        }
        tail = findNode(*ptrHead1, count-1);
        tail->next = head2;
        return 0;
    }
}


int combineAlternating(ListNode **ptrHead, ListNode *head1, ListNode *head2){
    if (head1 == NULL && head2 == NULL) return -1;
    ListNode *head, *remain = NULL;
    while (head1 != NULL && head2 != NULL){
        if (*ptrHead == NULL){
            *ptrHead = malloc(sizeof(ListNode));
            head = *ptrHead;
        }
        else{
            head->next = malloc(sizeof(ListNode));
            head = head->next;
        }
        head->num = head1->num;
        head->next = malloc(sizeof(ListNode));
        head = head->next;
        head->num = head2->num;
        head->next = NULL;

        head1 = head1->next;
        head2 = head2->next;
    }
    if (head1 != NULL){
        remain = head1;
    }
    if (head2 != NULL){
        remain = head2;
    }

    while (remain != NULL){
        if (*ptrHead == NULL){
            *ptrHead = malloc(sizeof(ListNode));
            head = *ptrHead;
        }
        else{
            head->next = malloc(sizeof(ListNode));
            head = head->next;
        }
        head->num = remain->num;
        head->next = NULL;
        remain = remain->next;
    }
    return 0;
}


int insertDbl(DblListNode **ptrHead, int index, int value){
    if (index < 0) return -1;

    if (*ptrHead == NULL){
        if (index > 0) return -1;
        *ptrHead = malloc(sizeof(DblListNode));
        (*ptrHead)->pre = NULL;
        (*ptrHead)->next = NULL;
        (*ptrHead)->num = value;
        return 0;
    }

    if (index == 0){
        DblListNode *temp = malloc(sizeof(DblListNode));
        temp->num = value;
        temp->pre = NULL;
        temp->next = *ptrHead;
        *ptrHead = temp;
        return 0;
    }
    else{
        DblListNode *temp = malloc(sizeof(DblListNode));
        DblListNode *head = *ptrHead;
        while (index - 1 > 0){
            if ((head = head->next) == NULL) return -1;
            index--;
        }
        if (head == NULL) return -1;
        temp->num = value;
        temp->pre = head;
        temp->next = head->next;
        head->next = temp;
        temp->next->pre = temp;
        return 0;
    }
}


////////////////////////////////////////////////////////////////////
