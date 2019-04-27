#include<stdio.h>

int FactDigit(int iNo)
{
	int iDigit=0;
	int i=0;
	int iFact=1;
	int iSum=0;

	while(iNo!=0)
	{
		iDigit=iNo%10;
		for(i=1;i<=iDigit;i++)
		{
			iFact=iFact*i;
		}
		iSum=iSum+iFact;
		iFact=1;
		iNo=iNo/10;
	}
	return iSum;
}


int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet=FactDigit(iValue);
	printf("The Factorial of number is %d\n",iRet);
	return 0;
}



