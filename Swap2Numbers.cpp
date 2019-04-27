#include<stdio.h>

void SwapInt(int No1,int No2)
{
	printf("Two number before swap\n");
	printf("%d,%d",No1,No2);

	No1=No1+No2;
	No2=No1-No2;
	No1=No1-No2;

	printf("\nTwo number after swap\n");
	printf("%d,%d\n",No1,No2);
}

int main()
{
	int value1=0;
	int value2=0;

	printf("Enter first number\n");
	scanf("%d",&value1);
	
	printf("Enter second number\n");
	scanf("%d",&value2);

	SwapInt(value1,value2);
	return 0;
}



