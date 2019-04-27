#include<stdio.h>

void SwapCharacter(char ch1,char ch2)
{
	char temp='\0';

	printf("Character before swap are\n");
	printf("ch1= %c",ch1);
	printf("\nch1= %c",ch2);
	if(((ch1>='a'&& ch1<='z')&&(ch2>='a'&& ch2<='z'))||((ch1>='A'&& ch1<='Z')&&(ch2>='A'&& ch2<='Z')))
	{
		temp=ch1;
		ch1=ch2;
		ch2=temp;
	}
	printf("\nCharacter before after are\n");
	printf("ch1= %c",ch1);
	printf("\nch1= %c\n",ch2);
}

int main()
{
	char cValue1='\0';
	char cValue2='\0';
	
	printf("Enter first character\n");
	scanf("%c",&cValue1);

	fflush(stdin);
	printf("Enter second character\n");
	scanf("%c",&cValue2);

	SwapCharacter(cValue1,cValue2);

	return 0;
}
