#include<stdio.h>

void PrintPattern(int iNo)
{
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		printf("*\t");
	}
	for(i=1;i<=iNo;i++)
	{
		printf("#\t");
	}
}

int main()
{
	int ivalue=0;
	printf("Enter number\n");
	scanf("%d",&ivalue);

	PrintPattern(ivalue);
	return 0;
}