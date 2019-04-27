#include<stdio.h>

void PrintStar(int iNo)
{
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		printf("*\n");
	}
}

int main()
{
	int value=0;
	printf("Enter thr number\n");
	scanf("%d",&value);

	PrintStar(value);

	return 0;
}
