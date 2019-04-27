#include<stdio.h>

int LargestElement(int arr[],int value)
{
	int i=0;
	int iSmall=arr[0];

	for(i=0;i<value;i++)
	{
		if(arr[i]<iSmall)
		{
			iSmall=arr[i];
		}
	}
	return iSmall;
}

int main()
{
	int brr[5];
	int i=0;
	int iRet=0;

	printf("Enter the values\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
	iRet=LargestElement(brr,5);
	printf("Smallest element is %d\t",iRet);

	return 0;
}




	