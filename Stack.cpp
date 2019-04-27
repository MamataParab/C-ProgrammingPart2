#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void PUSH(PPNODE head,int value)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));

	newn->data=value;
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


void POP(PPNODE head)
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

int PEEP(PNODE head)
{
	if(head==NULL)
	{
		return -1;
	}
	else
	{
		return(head->data);
	}
}

int main()
{
	PNODE First=NULL;
	int iRet=0;

	printf("PUSH function\n");
	PUSH(&First,11);
	PUSH(&First,22);
	PUSH(&First,33);
	PUSH(&First,44);
	PUSH(&First,55);
	Display(First);

	printf("\nPOP function\n");
	POP(&First);
	Display(First);

	iRet=PEEP(First);
	printf("\nPEEP element is %d\n",iRet);

	return 0;
}




		

