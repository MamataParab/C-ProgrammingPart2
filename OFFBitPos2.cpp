#include<stdio.h>
typedef unsigned long int UINT;

//Dynamic mask creation 

UINT OffBit(UINT iNo,int iPos)
{
	UINT Result=0;
	UINT iMask=0x1;

	if((iPos<1)||(iPos>32))
	{
		return iNo;
	}


	iMask=iMask<<(iPos-1);
	iMask= ~iMask;

	Result=iNo & iMask;
	return Result;

	
}

int main()
{
	UINT iValue=0;
	UINT Ret=0;
	int iPos=0;

	printf("Enter the number\n");
	scanf("%u",&iValue);

	printf("Enter the position\n");
	scanf("%d",&iPos);

	Ret=OffBit(iValue,iPos);

	printf("Number after bit off is %u\n",Ret);


	
	return 0;
}


