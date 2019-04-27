#include<stdio.h>

void NumberPattern2(int iNo1,int iNo2)
{
	int i=0;
	int j=0;
	
	


	for(i=1;i<=iNo1;i++)
	{
		for(j=1;j<=iNo2;j++)
		{
			printf("%d\t",i);
			
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

	NumberPattern2(iValue1,iValue2);
	return 0;
}