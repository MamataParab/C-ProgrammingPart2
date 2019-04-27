#include<stdio.h>
typedef unsigned long int UINT;

int OnBit(UINT iNo)
{
	UINT Result=0;
	UINT Mask=8;

	Result=iNo|Mask;
	return Result;
}



int main()
{
	UINT iValue=0;
	UINT Ret=0;
	printf("Enter number\n");
	scanf("%u",&iValue);

	Ret=OnBit(iValue);
	printf("Number after switch on 4th bit %u\n",Ret);

	return 0;
}
		
