#include<stdio.h>

typedef int BOOL;
typedef unsigned long int UINT;
#define TRUE 1
#define FALSE 0

UINT ToggleMultipleBit(UINT iNo)
{
	UINT Result=0;
	UINT iMask=0X00100640;

	Result=iNo^iMask;
	return Result;

	
}

int main()
{
	UINT iValue=0;
	UINT Ret=0;

	printf("Enter the number\n");
	scanf("%u",&iValue);

	Ret=ToggleMultipleBit(iValue);

	printf("Number after 7th,10th,11th and 21st  bit toggled is %d\n",Ret);


	
	return 0;
}


