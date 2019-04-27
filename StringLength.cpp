#include<stdio.h>

int DisplayLength(char arr[20])
{
	int i=0;
	int Counter=0;

	for(i=0;arr[i]!='\0';i++)
	{
		Counter++;
	}
	return Counter;
}

int main()
{
	int iRet=0;
	int i=0;
	char arr[20];
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	printf("Entered string is:\t");
	for(i=0;arr[i]!='\0';i++)
	{
		printf("%c",arr[i]);
	}

	iRet=DisplayLength(arr);
	printf("\nLength of string is %d\n",iRet);

	return 0;
}

