#include<stdio.h>

int Factorial(int iNo)
{
	static int i=1;
	static int iFact=1;

	if(i<=iNo)
	{
		iFact=iFact*i;
		i++;
		Factorial(iNo);
	}
	return iFact;
}

int main()
{
	int iRet=0;
	int iValue=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet=Factorial(iValue);
	printf("Factorial of number is %d\n ",iRet);

	return 0;
}