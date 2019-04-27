#include<stdio.h>
typedef unsigned long int UINT;

UINT ToggleMultipleBit(UINT iNo)
{
	UINT Result=0;
	UINT iMask=0xaaaaaaaa;

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

	printf("Number after alternate bit toggled is %u\n",Ret);


	
	return 0;
}


