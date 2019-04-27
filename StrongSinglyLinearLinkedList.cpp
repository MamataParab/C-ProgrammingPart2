#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
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

void Strong(PNODE head)
{
	int iSmall=head->data;
	int i=0;
	int iFact=0;

	while(head!=NULL)
	{
		for(i=1;i<head->data;i++)
		{
			if((head->data%i)==0)
			{
				iFact=iFact+i;
			}
		}
		
		if(iFact==head->data)
		{
			printf("\nStrong numbers is %d\t",head->data);
		}
		iFact=0;
		head=head->next;
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

int main()
{
	PNODE First=NULL;
	int iRet=0;

	InsertFirst(&First,28);
	InsertFirst(&First,11);
	InsertFirst(&First,27);
	InsertFirst(&First,41);
	InsertFirst(&First,6);
	InsertFirst(&First,89);
	InsertFirst(&First,33);
	InsertFirst(&First,55);
	Display(First);


	Strong(First);


	return 0;
}