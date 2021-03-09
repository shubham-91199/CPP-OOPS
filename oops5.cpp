#include<iostream>
using namespace std;

class shape
{
	public:
	void area()
	{
		cout<<"No area";
	}
	void area(int a)
	{
		cout<<"area of circle";
	}
	void area(int a, int b)
	{
		cout<<"area of rectangle";
		
	}
	void area(int a,int b,int c)
	{
		cout<<"area of triangle";
	}
	
	
};
int main()
{
	shape s;
	s.area();
	s.area(7);
	s.area(3,4);
	s.area(3,4,5);
	return 0;
}
