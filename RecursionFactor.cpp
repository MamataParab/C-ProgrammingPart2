#include<stdio.h>
#include<stdlib.h>

void DisplayFactR(int iNo)
{
	static int i=1;
	if(i<=(iNo/2))
	{
		if((iNo%i)==0)
		{
			printf("%d\t",i);
		}
		i++;
		DisplayFactR(iNo);
	}
}

int main()
{
	int iValue=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	DisplayFactR(iValue);

	return 0;
}




