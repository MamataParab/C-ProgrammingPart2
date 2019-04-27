#include<stdio.h>

int UpperCharFreq(char *str)
{
	int iCount=0;

	if(*str=='\0')
	{
		return -1;
	}
	while(*str!='\0')
	{
		if(*str>='A'&&*str<='Z')
		{
			iCount++;
		}
		*str++;
	}
	return iCount;
}

int main()
{
	char arr[20];
	int iRet=0;

	printf("Enter a string\n");
	scanf("%[^'\n']s",arr);

	iRet=UpperCharFreq(arr);
	printf("\nCount of upper case character is %d\n ",iRet);
	return 0;
}
