#include<stdio.h>
void DisplayNumR(int iNo)
{
	if(iNo>0)
	{
		printf("%d\t",iNo);
		iNo--;
		DisplayNumR(iNo);
	}
}

int main()
{
	int iValue=0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	DisplayNumR(iValue);

	return 0;
}

