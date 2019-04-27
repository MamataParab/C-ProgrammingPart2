#include<stdio.h>
typedef unsigned long int UINT;

//Dynamic mask creation 

UINT ToggleBit2(UINT iNo,int iPos)
{
	UINT Result=0;
	UINT iMask=0x1;

	iMask=iMask<<(iPos-1);

	Result=iNo^iMask;
	return Result;

	
}

int main()
{
	UINT iValue=0;
	UINT Ret=0;
	int iPos=0;

	printf("Enter the number\n");
	scanf("%u",&iValue);

	printf("Enter the position\n ");
	scanf("%d",&iPos);
	Ret=ToggleBit2(iValue,iPos);

	printf("Number after toggled is %u\n",Ret);


	
	return 0;
}


