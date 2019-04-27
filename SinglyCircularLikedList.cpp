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

/*void InsertFirst(PPNODE head,PPNODE tail,int value)
{
	PNODE newn=NULL;
	newn->data=value;
	newn->next=NULL;

	if((*head==NULL)&&(*tail==NULL))
	{
		*head=newn;
		*tail=newn;
		(*tail)->next=*head;
	}
	else
	{
		newn->next=*head;
		*head=newn;
		(*tail)->next=*head;
	}
}*/


void Display(PNODE head,PNODE tail)
{
	if((head==NULL)&&(tail==NULL))
	{
		return;
	}
	do
	{
		printf("%d\t",head->data);
		head=head->next;
	}while(head!=tail->next);
}

void InsertLast(PPNODE head,PPNODE tail,int value)
{
	PNODE newn=NULL;
	newn->data=value;
	newn->next=NULL;

	if((*head==NULL)&&(*tail==NULL))
	{
		*head=newn;
		*tail=newn;
		(*tail)->next=*tail;
	}

	else
	{
		while((*head)->next!=*head)
		{
			*head=(*head)->next;
		}
		(*head)->next=newn;
	}
}

}

int main()
{
	PNODE First=NULL;
	PNODE Second=NULL;

	/*InsertFirst(&First,&Second,11);
	InsertFirst(&First,&Second,22);
	InsertFirst(&First,&Second,33);
	InsertFirst(&First,&Second,44);
	InsertFirst(&First,&Second,55);*/

	InsertLast(&First,&Second,11);
	Display(First,Second);
	
    return 0;
}
