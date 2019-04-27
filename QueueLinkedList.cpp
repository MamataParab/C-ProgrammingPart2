#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Enqueue(PPNODE head,int value)
{
	PNODE newn=NULL;
	PNODE temp=*head;
	newn=(PNODE)malloc(sizeof(int));
	newn->data=value;
	newn->next=NULL;

	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}
}

void Dequeue(PPNODE head)
{
	PNODE temp=*head;
	if(*head==NULL)
	{
		return;
	}
	else
	{
		*head=(*head)->next;
		free(temp);
	}
}
		

void Display(PNODE head)
{
	while(head!=NULL)
	{
		printf("%d\t",head->data);
		head=head->next;
	}
}


int main()
{
	PNODE First=NULL;

	printf("Enqueue function\n");
	Enqueue(&First,11);
	Enqueue(&First,22);
	Enqueue(&First,33);
	Enqueue(&First,44);
	Enqueue(&First,55);
	Display(First);

	printf("\nDequeue function\n");
	Dequeue(&First);
	Display(First);

	return 0;
}


	
