#include<stdio.h>

void DisplayPrime(int arr[],int value)
{
	int i=0;
	int iCnt=0;
	int j=0;

	for(i=0;i<value;i++)
	{
		for(j=2;j<=arr[i]/2;j++)
		{
			if((arr[i]%2)==0)
			{
				iCnt++;
			}
		}
		if(iCnt==0)
		{
			printf("%d\t",arr[i]);
		}
		iCnt=0;

	}
}


int main()
{
	int brr[5];
	int i=0;
	int iRet=0;

	printf("Enter the values\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
	DisplayPrime(brr,5);
	
	return 0;
}




	