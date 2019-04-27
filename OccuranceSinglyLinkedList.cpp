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

int Search(PNODE head,int iNo)
{
	int iCnt=0;
	
	while(head!=NULL)
	{
		if((head->data)==iNo)
		{
			break;
		}
		iCnt++;
		head=head->next;
	}
	return iCnt;
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
	int iValue=0;

	int iRet=0;
	InsertFirst(&First,22);
	InsertFirst(&First,11);
	InsertFirst(&First,22);
	InsertFirst(&First,33);
	InsertFirst(&First,44);
	InsertFirst(&First,33);
	InsertFirst(&First,55);
	Display(First);

	printf("\nEnter the value which need to be serched\n");
	scanf("%d",&iValue);

	iRet=Search(First,iValue);
	printf("\nOccurance of %d is %d\n",iValue,iRet);


	return 0;
}