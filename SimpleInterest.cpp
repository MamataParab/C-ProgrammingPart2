#include<stdio.h>
float SimpleIntrest(float Principle,float time,int Rate)
{
	float Result=(Principle*time*Rate)/100;
	return Result;
}
int main()
{
	float Fret=0.0;
	float p,t,r=0.0;
	printf("Enter Principle,time and rate\n");
	scanf("%f%f%f",&p,&t,&r);

	Fret=SimpleIntrest(p,t,r);
	printf("Simple Intrest is %f\n",Fret);

	return 0;
}