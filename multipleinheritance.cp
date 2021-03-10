#include<iostream>
using namespace std;
class shape
{
	public:
		void setwidth(int w)
		{
			width=w;
			
		}
		void setheight(int h)
		{
			height=h;
			
		}
	protected:
		int width;
		int height;
		
};

class rectangle:public shape
{
	public:
		int getarea()
		{
			return(width*height);
		}
};
class paintcost
{
	public:
		int getpaintcost(int a)
		{
			return(a*100);
		}
};
class rectangle:public shape,public paintcost
{
	public:
		int getarea()
		{
			return(width*height);
		}
}
int main()
{
	rectangle R1;
	R1.setwidth(50);
	R1.setheight(30);
	int x=R1.getarea();
	int y=R1.getpaintcost(x);
	cout<<x,y;
	return 0;
}
