#include<stdio.h>
void Add(int arr[])
{
	
	int *p=arr;
	printf("%d\n",&p);
	printf("%d\n",p);

	p++;
	printf("%d\n",&p);
	printf("%d\n",p);
}

int main()
{
	int arr[5]={10,20,30,40,50};
	Add(arr);
	return 0;
}


	