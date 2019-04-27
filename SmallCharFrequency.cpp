#include<stdio.h>

int FrequencySmallChar(char *str)
{
	int iCount=0;
	int i=0;
	if(str=='\0')
	{
		return -1;
	}
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			iCount++;
		}
		*str++;
	}
	return iCount;
}

int main()
{
	char arr[20]={0};
	int iRet=0;

	printf("Enter a string\n");
	scanf("%[^'\n']s",arr);

	iRet=FrequencySmallChar(arr);
	printf("Small character frequency is %d\n",iRet);

	return 0;
}


