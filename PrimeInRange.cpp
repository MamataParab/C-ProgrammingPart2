#include<stdio.h>

void PrimeInRange(int iStart,int iEnd)
{
	int i=0;
	int iCnt=0;
	int j=0;

	for(i=iStart;i<=iEnd;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if((i%j)==0)
			{
				iCnt++;
			}
		}
		if(iCnt==0)
		{
			printf("%d\t",i);
		}
		iCnt=0;
	}
	
	
}

int main()
{
	int iRet=0;
	int iValue1=0;
	int iValue2=0;

	printf("Enter the starting value\n");
	scanf("%d",&iValue1);

	printf("Enter the ending value\n");
	scanf("%d",&iValue2);

	PrimeInRange(iValue1,iValue2);

	return 0;
}

