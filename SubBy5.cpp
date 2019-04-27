#include<stdio.h>

int Sub5(int value)
{
	int iRet=0;
	iRet=value-5;
	return iRet;
}
int main()
{
	int iValue=0;
	int iNo=0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iNo=Sub5(iValue);
	printf("Result after subtraction is %d\n",iNo);

	return 0;
}

