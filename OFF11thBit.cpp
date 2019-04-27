#include<stdio.h>

typedef int BOOL;
typedef unsigned long int UINT;
#define TRUE 1
#define FALSE 0

UINT OFF11bit(UINT iNo)
{
	UINT Result=0;
	UINT iMask=0xFFFFFBFF;

	Result=iNo&iMask;
	 
	return Result;
}

int main()
{
	UINT iValue=0;
	UINT Ret=0;

	printf("Enter the number\n");
	scanf("%u",&iValue);

	Ret=OFF11bit(iValue);
	printf("The number after switching off 11th bit is %d\n ",Ret);
	return 0;
}


