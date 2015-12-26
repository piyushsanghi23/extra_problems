

#include <stdio.h>
#include <conio.h>
#include  <malloc.h>
struct node {
	int num;
	struct node *next;
};


void print_list(struct node *head)
{
    struct node *ptr = head;

    printf("\n -------Printing list Start------- \n");
    while(ptr != NULL)
    {
        printf("\n [%d] \n",ptr->num);
        ptr = ptr->next;
    }
    printf("\n -------Printing list End------- \n");

    return;
}
struct node * createNode(int num) {
			struct node *newNode = (struct node *)malloc(sizeof(struct node));
			newNode->num = num;
			newNode->next = NULL;
			return newNode;
		}

struct node * createList(int num) {
			struct node *head = createNode(num % 10);
			num /= 10;
			while (num) {
				struct node *newNode = createNode(num % 10);
				newNode->next = head;
				head = newNode;
				num /= 10;
			}
			return head;
		}
struct node * swapLinkedList(struct node *head) {
	if (head != NULL)
	{
		int temp = 0;
		struct node *first = head;

		struct node *third = NULL;
		while (first->num < first->next->num){
			first = first->next;

		}
		third = first;
		first = first->next;
		while (first->num < first->next->num)
		{
			first = first->next;

		}
		first = first->next;

		temp = first->num;
		first->num = third->num;
		third->num = temp;

		return head;
	}

	else
	{
		return NULL;
	}
}
int main(void) {
	
	struct node *p;
	p=createList(129456783);    // random linke list 
	p=swapLinkedList(p);
	print_list(p);
	getch();
	return 0;
}

