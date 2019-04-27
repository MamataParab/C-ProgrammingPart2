#include<stdio.h>

void PrintString(int iNo)
{
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		printf("Education is important\n");
	}
}

int main()
{
	int value=0;
	printf("Enter the count of repitation of string\n");
	scanf("%d",&value);

	PrintString(value);
	return 0;
}


