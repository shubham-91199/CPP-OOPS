#include<iostream>
using namespace std;

class Shape
{
	public:
	Shape()
	{
	cout<<"constructor without parameter";
	}
	Shape(int a)
	{
		cout<<"constructor with integer parameter";
	}	
	
};
main()
{
Shape s(10);

}
