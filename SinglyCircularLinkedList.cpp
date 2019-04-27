#include<stdlib.h>
#include<stdio.h>

struct node
{
	int data;
	struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head,PPNODE tail,int value)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
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
}

void Display(PNODE head,PNODE tail)
{
	if((head==NULL)&&(tail==NULL))
	{
		return;
	}
	else
	{
		do
		{
			printf("%d\t",head->data);
			head=head->next;
		}while(head!=tail->next);
	}
}

void DeleteFirst(PPNODE head,PPNODE tail)
{
	PNODE temp=*head;

	if((*head==NULL)&&(*tail==NULL))
	{
		return;
	}
	else
	{
		*head=(*head)->next;
		free(temp);
		(*tail)->next=*head;
	}
}

void InsertLast(PPNODE head,PPNODE tail,int value)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=value;
	newn->next=NULL;
	PNODE temp=*head;

	if((*head==NULL)&&(*tail==NULL))
	{
		
		*head=newn;
		*tail=newn;
		(*tail)->next=*head;
	}
	else
	{
		(*tail)->next=newn;
		newn->next=*head;
		*tail=newn;
		(*tail)->next=*head;
	}

}

void DeleteLast(PPNODE head,PPNODE tail)
{
	PNODE temp=*head;
	PNODE temp2=*tail;

	if((*head==NULL)&&(*tail==NULL))
	{
		return;
	}
	else
	{
		while(temp->next!=*tail)
		{
			temp=temp->next;
		}
		*tail=temp;
		free(temp2);
		(*tail)->next=*head;
	}
}

int Count(PNODE head,PNODE tail)
{
	int iCnt=0;

	if((head==NULL)&&(tail==NULL))
	{
		return -1;
	}
	else
	{
		do
		{
			iCnt++;
			head=head->next;
		}while(head!=tail->next);

		return iCnt;
	}
}

void InsertAtPos(PPNODE head,PPNODE tail,int value,int iPos)
{
	int Size=Count(*head,*tail);
	PNODE temp=*head;
	int i=0;

	if(iPos==1)
	{
		InsertFirst(head,tail,value);
	}
	else if(iPos==Size+1)
	{
		InsertLast(head,tail,value);
	}
	else
	{
		
		PNODE newn=NULL;
		newn=(PNODE)malloc(sizeof(NODE));
		newn->data=value;
		newn->next=NULL;
		PNODE temp=*head;

		for(i=1;i<=(iPos-2);i++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next=newn;
	}

}

void DeleteAtPos(PPNODE head,PPNODE tail,int iPos)
{
	PNODE temp=*head;
	PNODE temp2=NULL;
	int i=0;
	int size=Count(*head,*tail);

	if(iPos==1)
	{
		DeleteFirst(head,tail);
	}
	else if(iPos==size)
	{
		DeleteLast(head,tail);
	}
	else
	{
		for(i=1;i<=(iPos-2);i++)
		{
			temp=temp->next;
		}
		temp2=temp->next;
		temp->next=temp2->next;
		free(temp2);
	}
}

		


int main()
{
	PNODE First=NULL;
	PNODE Last=NULL;
	int iRet=0;

	printf("InsertFirst\n");
	InsertFirst(&First,&Last,11);
	InsertFirst(&First,&Last,22);
	InsertFirst(&First,&Last,33);
	InsertFirst(&First,&Last,44);
	InsertFirst(&First,&Last,55);
	InsertFirst(&First,&Last,66);
	Display(First,Last);

	printf("\nDeleteFirst\n");
	DeleteFirst(&First,&Last);
	Display(First,Last);

	printf("\nInsertLast\n");
	InsertLast(&First,&Last,101);
	Display(First,Last);

	printf("\nDeleteLast\n");
	DeleteLast(&First,&Last);
	Display(First,Last);

	iRet=Count(First,Last);
	printf("\nCount of node is %d\t",iRet);

	printf("\nInsertAtPos\n");
	InsertAtPos(&First,&Last,101,4);
	Display(First,Last);
	iRet=Count(First,Last);
	printf("\nCount of node is %d\t",iRet);

	printf("\nDeleteAtPos\n");
	DeleteAtPos(&First,&Last,4);
	Display(First,Last);
	iRet=Count(First,Last);
	printf("\nCount of node is %d\t",iRet);

	return 0;
}

