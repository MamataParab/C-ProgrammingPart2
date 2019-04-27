#include<stdio.h>

int SumFactorAndNonFactor(int iNo)
{
	int iFact=0;
	int i=0;
	int iNFact=0;

	for(i=1;i<=iNo;i++)
	{
		if((iNo%i)==0)
		{
			iFact=iFact+i;
		}
		else
		{
			iNFact=iNFact+i;
		}

	}
	return iFact-iNFact;
	
}

int main()
{
	int iNo=0;
	int Value=0;
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	Value=SumFactorAndNonFactor(iNo);
	printf("Summation of factor and non factor is %d\n",Value);
	
	return 0;
}
