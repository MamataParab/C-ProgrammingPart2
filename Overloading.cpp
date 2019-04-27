#include<iostream>
using namespace std;

class Demo
{
public:
	int i;
	int j;

public:
	Demo()
	{
		i=10;
		j=20;
	}
	void Fun(int x)
	{
		cout<<"Inside fun with single input argument\n";
		this->i=x;
		cout<<this->i<<"\n";
	}
	void Fun(int x,int y)
	{
		cout<<"Inside fun with two input arguments\n";
		this->i=x;
		this->j=y;

		cout<<this->i<<"\n";
		cout<<this->j<<"\n";
	}
};

int main()
{
	Demo obj1;
	obj1.Fun(12);

	obj1.Fun(12,23);

	return 0;
}



