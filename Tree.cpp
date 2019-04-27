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
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=value;
	newn->Lchild=NULL;
	newn->Rchild=NULL;
	PNODE temp=*root;

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

void InOrder(PNODE root)
{
	if(root==NULL)
	{
		return;
	}
	if(root!=NULL)
	{
		InOrder(root->Lchild);
		printf("%d\t",root->data);
		InOrder(root->Rchild);
	}
}

void PostOrder(PNODE root)
{
	if(root!=NULL)
	{
		PostOrder(root->Lchild);
		PostOrder(root->Rchild);
		printf("%d\t",root->data);
	}
}

void PreOrder(PNODE root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->data);
		PreOrder(root->Lchild);
		PreOrder(root->Rchild);
	}
}

int CntLeaf(PNODE root)
{
	static int icnt=0;
	if(root==NULL)
	{
		return -1;
	}
	
	if(root!=NULL)
	{
		if((root->Lchild==NULL)&&(root->Rchild==NULL))
		{
			icnt++;
			
		}
		CntLeaf(root->Rchild);
		CntLeaf(root->Lchild);
	}
	return icnt;
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
	printf("Total number of node are %d ",iRet);
	Bret=Search(First,88);
	if(Bret==TRUE)
	{
		printf("\nNode is present\n");
	}
	else
	{
		printf("\nNode is not present\n");
	}

	InOrder(First);
	printf("\n");
	PreOrder(First);
	printf("\n");
	PostOrder(First);

	iRet=CntLeaf(First);
	printf("\n Number of leaf node are %d\t",iRet);


	return 0;
}


