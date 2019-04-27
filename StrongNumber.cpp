#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkStrong(int iNo)
{
	int iDigit=0;
	int iSum=0;
	int iMul=1;
	int i=0;
	int itemp=iNo;

	while(iNo!=0)
	{
		iDigit=iNo%10;
		for(i=1;i<=iDigit;i++)
		{
			iMul=iMul*i;
		}
		iSum=iSum+iMul;
		iNo=iNo/10;
		iMul=1;
	}

	if(itemp==iSum)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int i=0;
	BOOL Bret=TRUE;
	int iValue=0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	Bret=ChkStrong(iValue);
	if(Bret==TRUE)
	{
		printf("Given number is strong number\n");
	}
	else
	{
		printf("Given number is not strong number\n");
	}
	return 0;
}

