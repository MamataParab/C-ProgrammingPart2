#include<stdio.h>

void NumberPattern4(int iNo1,int iNo2)
{
	int i=0;
	int j=0;
	
	
	for(i=1;i<=iNo1;i++)
	{
		for(j=1;j<=iNo2;j++)
		{
			if(i==j)
			{
				printf("$\t");
			}
			else if((i==1)||(j==iNo2))
			{
				printf("@\t");
			}
			else if((j==1)||(i==iNo1))
			{
				printf("*\t");
			}
			else if(j>i)
			{
				printf("&\t");
			}
			else if(i>j)
			{
				printf("#\t");
			}
			else
			{
				printf("&\t");
			}

			
		}		
		printf("\n");
	
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

	NumberPattern4(iValue1,iValue2);
	return 0;
}