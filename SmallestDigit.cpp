#include<stdio.h>
int SmallestDigit(int iNo)
{
	int iDigit=0;
	int iMin=9;

	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit<=iMin)
		{
			iMin=iDigit;
		}
		iNo=iNo/10;
	}
	return iMin;
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the number\n");
	scanf("%d",&iValue);
	iRet=SmallestDigit(iValue);

	printf("Smallest digit is %d\n",iRet);
	return 0;
}

		

