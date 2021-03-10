#include<iostream>
using namespace std;

class Gadha
{
	private:
		int a,b;
	public:
		Gadha()
		{a=b=0;
		
		}
		Gadha(int x,int y)
		{
			a=x,b=y;
			}
		Gadha operator +(Gadha obj)		
		{
			Gadha temp;
			temp.a=a+obj.a;
			temp.b=b+obj.b;
			return temp;
		}
	void print()
	{
		cout<<a;
		cout<<b;
		}	
};
int main()
{
	Gadha G1(10,20);
	Gadha G2(5,5);
	Gadha G3;
	G3=G1+G2;
	G3.print();
	
	
}
