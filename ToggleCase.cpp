#include<stdio.h>

void ToggleCase(char *str)
{
	if(*str=='\0')
	{
		return;
	}
	printf("String after toggle is\n");
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			*str=*str-32;
		}
		else if((*str>='A')&&(*str<='Z'))
		{
			*str=*str+32;
		}
		printf("%c",*str);
		*str++;
		
	}
	
}

int main()
{
	char ch[20];
	printf("Enter a string\n");
	scanf("%[^'\n']s",ch);

	ToggleCase(ch);
	return 0;
}

	
