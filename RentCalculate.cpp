#include<stdio.h>

int RentCal(int Kilometer)
{
	int Rent=0;
	if(Kilometer<=120)
	{
		Rent=Kilometer*15;
	}
	else if(Kilometer>120)
	{
		Rent=120*15+(Kilometer-120)*10;
	}
	return Rent;
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the Kilometer distance\n");
	scanf("%d",&iValue);

	iRet=RentCal(iValue);
	printf("The Rent is %d\n",iRet);
	return 0;
}



