#include<stdio.h>
void ChkVowel(char ch)
{
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
	{
		printf("Given alphabet is vowel\n");
	}
	else
	{
		printf("Given alphabet is not vowel\n");
	}
}

int main()
{
	char ch='\0';
	printf("Enter the character\n");
	scanf("%c",&ch);

	ChkVowel(ch);

	return 0;
}


