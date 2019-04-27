#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

struct node
{
	int data;
	struct node*next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head,int Value)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=Value;
	newn->next=NULL;

	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		newn->next=*head;
		*head=newn;
	}
}

void InsertLast(PPNODE head,int Value)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=Value;
	newn->next=NULL;

	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		while((*head)->next!=NULL)
		{
			*head=(*head)->next;
		}
		(*head)->next=newn;
		newn->next=NULL;
	}
}


void Display(PNODE head)
{
	if(head==NULL)
	{
		return;
	}
	while(head!=NULL)
	{
		printf("%d\t",head->data);
		head=head->next;
	}
}

int Count(PNODE head)
{
	int iCnt=0;
	if(head==NULL)
	{
		return -1;
	}
	else
	{
		while(head->next!=NULL)
		{
			iCnt++;
			head=head->next;
		}
		return iCnt;
	}
}




int main()
{
	PNODE First=NULL;
	int iRet=0;

	InsertFirst(&First,11);
	InsertFirst(&First,12);
	InsertFirst(&First,13);
	InsertFirst(&First,14);
	InsertFirst(&First,15);
	Display(First);
	iRet=Count(First);
	printf("\nCount is %d\n", iRet);

	InsertLast(&First,100);
	Display(First);
	iRet=Count(First);
	printf("\nCount is %d\n", iRet);

	return 0;
}
