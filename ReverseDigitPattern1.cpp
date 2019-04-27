#include<stdio.h>

void Pattern(int arr[],int size)
{
	int i=0;
	int Digit=0;
	int iRev=0;
	int j=0;
	
	for(i=0;i<size;i++)
	{
		while(arr[i]!=0)
		{
			Digit=arr[i]%10;
			iRev=iRev*10+Digit;
			arr[i]=arr[i]/10;
		}
		arr[i]=iRev;
		Digit=0;
		iRev=0;
	}

	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",arr[j]);
		}
		printf("\n");
	}

}

int main()
{
	int arr[4]={12,23,17,34};
	Pattern(arr,4);
	return 0;
}



	


		