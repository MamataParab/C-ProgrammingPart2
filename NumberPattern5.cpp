#include<stdio.h>

void NumberPattern5(int iNo1,int iNo2)
{
	int i=0;
	int j=0;
	int iNo=1;
	
	
	for(i=1;i<=iNo1;i++)
	{
		for(j=iNo2;j>=1;j--,iNo++)
		{
			if((i%2)==0)
			{
				printf("%d\t",j);
			}
			else
			{
				printf("%d\t",iNo);
			}
			
		}		
		printf("\n");
		iNo=1;
	
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

	NumberPattern5(iValue1,iValue2);
	return 0;
}