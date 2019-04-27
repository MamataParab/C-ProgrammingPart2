#include<stdio.h>
#include<stdlib.h>

int SecLarge(int arr[],int size)
{
	int Fmax=0;
	int Smax=0;
	int i=0;
	int temp=0;

	for(i=0;i<size;i++)
	{
		if(arr[i]>Fmax)
		{
			Smax=Fmax;
			Fmax=arr[i];
		}
		else if((arr[i]<Fmax)&&(arr[i]>Smax))
		{
			Smax=arr[i];
		}
	}
	return Smax;
}

int main()
{
	int value=0;
	int *arr=NULL;
	int i=0;
	int iret=0;

	printf("Enter the count of elements\n");
	scanf("%d",&value);

	printf("\nenter values of elements\n");
	arr=(int*)malloc(sizeof(int));
	for(i=0;i<value;i++)
	{
		scanf("%d",&arr[i]);
	}
	iret=SecLarge(arr,value);
	printf("\nSecond largest element in an array is %d",iret);

	return 0;
}
