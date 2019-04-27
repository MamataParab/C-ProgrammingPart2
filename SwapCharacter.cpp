#include<stdio.h>

void SwapChar(char ch1,char ch2)
{
	printf("Characters before swap are \n%c & %c\n",ch1,ch2);

	char temp='\0';
	temp=ch1;
	ch1=ch2;
	ch2=temp;

	printf("\nCharacters after swap are \n%c & %c\n",ch1,ch2);
}

int main()
{
	char ch1='\0';
	char ch2='\0';

	printf("Enter first character\n");
	scanf("%c",&ch1);

	fflush(stdin);

	printf("Enter second character\n");
	scanf("%c",&ch2);

	SwapChar(ch1,ch2);
	return 0;
}
