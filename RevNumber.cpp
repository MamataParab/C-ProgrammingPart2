#include<stdio.h>

int RevDigit(int iNo)
{
	int Reverse=0;
	int iDigit=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		Reverse=Reverse*10+iDigit;
		iNo=iNo/10;
	}
	return Reverse;
}

int main()
{
	int iNo=0;
	int iRet=0;
	printf("Enter the number\n");
	scanf("%d",&iNo);

	iRet=RevDigit(iNo);
	printf("The reverse digit is %d\n",iRet);

	return 0;
}