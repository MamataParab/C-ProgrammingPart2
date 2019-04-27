#include<stdio.h>

typedef int BOOL;
typedef unsigned long int UINT;
#define TRUE 1
#define FALSE 0

UINT ToggleBit(UINT iNo)
{
	UINT Result=0;
	UINT iMask=0X00000040;

	Result=iNo^iMask;
	return Result;

	
}

int main()
{
	UINT iValue=0;
	UINT Ret=0;

	printf("Enter the number\n");
	scanf("%u",&iValue);

	Ret=ToggleBit(iValue);

	printf("Number after 7th bit toggling is %d\n",Ret);


	
	return 0;
}


