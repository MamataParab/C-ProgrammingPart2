#include<stdio.h>

int RevNum(int iNo)
{
	int iDigit=0;
	int iRev=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}
	return iRev;
}

int main()
{
	int iRet=0;
	int iValue=0;

	printf("Enter value\n");
	scanf("%d",&iValue);
	iRet=RevNum(iValue);
	printf("%d\n",iRet);

	return 0;
}
