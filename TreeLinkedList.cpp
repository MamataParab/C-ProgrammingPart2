#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node* Rchild;
	int data;
	struct node* Lchild;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

void Insert(PPNODE root,int value)
{
	PNODE newn=NULL;
	PNODE temp=*root;

	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=value;
	newn->Lchild=NULL;
	newn->Rchild=NULL;

	if(*root==NULL)
	{
		*root=newn;
	}
	else
	{
	while(1)
	{
		if(value>temp->data)
		{
			if(temp->Rchild==NULL)
			{
				temp->Rchild=newn;
				break;
			}
			temp=temp->Rchild;
		}
		else if(value<temp->data)
		{
			if(temp->Lchild==NULL)
			{
				temp->Lchild=newn;
				break;
			}
			temp=temp->Lchild;
		}
		else if(value==temp->data)
		{
			free(newn);
			break;
		}
	}
	}
}

int Count(PNODE root)
{
	static int icnt=0;

	if(root!=NULL)
	{
		icnt++;
		Count(root->Lchild);
		Count(root->Rchild);
	}
	return icnt;
}



BOOL Search(PNODE root,int value)
{
	if(root==NULL)
	{
		return FALSE;
	}
	while(root!=NULL)
	{
		if(root->data==value)
		{
			break;
		}
		else if(value>root->data)
		{
			root=root->Rchild;
		}
		else if(value<root->data)
		{
			root=root->Lchild;
		}
	}
	if(root==NULL)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}





int main()
{
	PNODE First=NULL;
	int iRet=0;
	BOOL Bret=TRUE;

	Insert(&First,11);
	Insert(&First,22);
	Insert(&First,33);
	Insert(&First,44);
	Insert(&First,55);
	iRet=Count(First);
	printf("\nNumber of nodes %d\t",iRet);

	Bret=Search(First,90);
	if(Bret==TRUE)
	{
		printf("\nNode is Present\n");
	}
	else
	{
		printf("\nNode is not Present\n");
	}

	return 0;
}

