#include<stdio.h>

void NumberPattern1(int iNo1,int iNo2)
{
	int i=0;
	int j=0;
	char ch='A';


	for(i=1;i<=iNo1;i++)
	{

		for(j=1;j<=iNo2;j++,ch++)
		{
			if(i==1||j==1||i==iNo1||j==iNo2)
			{
				printf("%c\t",ch);
			}
			else
			{
				printf("0\t");
			}
		}		
		printf("\n");
		ch='A';
	}
}

int main()
{
	int iValue1=0;
	int iValue2=0;

	printf("Enter a number\n");
	scanf("%d",&iValue1);

	printf("Enter a number\n");
	scanf("%d",&iValue2);

	NumberPattern1(iValue1,iValue2);
	return 0;
}