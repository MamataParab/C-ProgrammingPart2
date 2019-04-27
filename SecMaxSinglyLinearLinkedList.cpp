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

int SecMax(PNODE head)
{
	int iMax1=head->data;
	int iMax2=0;

	
	while(head!=NULL)
	{
		if(head->data>iMax1)
		{
			iMax2=iMax1;
			iMax1=head->data;
		}
		if((head->data>iMax2 &&(head->data<iMax1)))
		{
			iMax2=head->data;
		}
		head=head->next;
	}
	return iMax2;
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

int SearchLast(PNODE head,int iNo)
{
	int iCnt1=0;
	int iCnt2=0;

	if(head==NULL)
	{
		return -1;
	}

	while(head!=NULL)
	{
		if(head->data==iNo)
		{
			iCnt2=iCnt1;
		}
		head=head->next;
		iCnt1++;
		
	}
	return iCnt2;
}

		


int main()
{
	PNODE First=NULL;
	int iValue=0;

	int iRet=0;
	InsertFirst(&First,202);
	InsertFirst(&First,502);
	InsertFirst(&First,22);
	InsertFirst(&First,11);
	InsertFirst(&First,22);
	InsertFirst(&First,33);
	InsertFirst(&First,44);
	InsertFirst(&First,33);
	InsertFirst(&First,55);
	Display(First);

	
	iRet=SecMax(First);
	printf("\nSecond max number is %d\n",iRet);


	return 0;
}



