 #include<iostream>
using namespace std;

class Shape
{
	public:
		
		{
			cout<<"show ";
			
		}
		
		
};
class Circle:public Shape
{
	public:
		
		{
			cout<<"Show ";
			
		}
		
};
class Rect:public Circle
{
	public:
		{
			cout<<"Show"
		}
};
class Triangle:public Rect
{
	public:
		{
			cout<<"Show"
		}
};

int main()
{
	
}
