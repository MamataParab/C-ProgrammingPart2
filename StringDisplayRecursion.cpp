#include<stdio.h>

void DisplayStringR(char arr[])
{
	static int i=0;

	if(arr[i]!='\0')
	{
		printf("%c\t",arr[i]);
		i++;
		DisplayStringR(arr);
	}
}

int main()
{

	char crr[]="Marvellous";
	DisplayStringR(crr);
	return 0;

}

