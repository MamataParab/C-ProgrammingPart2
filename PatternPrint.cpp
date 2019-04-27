#include<stdio.h>

void PatternPrint(int iNo)
{
	int i=0;
	int j=0;
	int k=0;


	for(i=iNo;i>=1;i--)
	{
		printf("%d",i);
		
		for(j=1;j<=iNo;j++)
		{
			for(k=iNo;k>=1;k--)
			printf("#",k);
		}
	}
	
}

int main()
{
	int iNo=0;
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	PatternPrint(iNo);
	return 0;
}
