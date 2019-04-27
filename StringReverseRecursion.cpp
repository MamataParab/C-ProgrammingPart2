#include<stdio.h>
#include<stdlib.h>

void StringRevR(char arr[],int size)
{
	static int i=size-1;
	if(i>=0)
	{
		printf("%c",arr[i]);
		i--;
		StringRevR(arr,size);
	}
	printf("\n");
}

int main()
{
	StringRevR("Marvellous",10);
	return 0;
}

