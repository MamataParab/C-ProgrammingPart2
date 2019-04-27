#include<stdio.h>

void UniqueElement(int arr[],int size)
{
	int i=0;
	int j=0;
	int iCnt=0;
	int k=0;
	int brr[]={0};

	for(i=0;i<size;i++)
	{
		iCnt=0;
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				iCnt++;
			}
		}
		if(iCnt==0)
		{
			printf("%d\t",arr[i]);
		}
		
	}



}


int main()
{
	int arr[]={10,20,30,30,40};

	UniqueElement(arr,5);
	return 0;
}