#include<stdio.h>

void PatternPrint(int iNo)
{
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		printf("*\t$");
		printf("\t");
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
