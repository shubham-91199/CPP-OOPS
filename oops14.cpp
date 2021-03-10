#include<iostream>
using namespace std;

class Nil
{
	private:
		int a,b,c,d,e;
	public:
		Nil()
		{
			a=b=c=d=e=0;
		}
		void print()
		{
			cout<<a<<endl;
			cout<<b<<endl;
			cout<<c<<endl;
			cout<<d<<endl;
			cout<<e;
		}
		
Nil operator ++()
	{
	Nil temp;
	temp.a=a+5;
	temp.b=b+5;
	temp.c=c+5;
	temp.d=d+5;
	temp.e=e+5;
	return temp;
	}	
};
int main()
{
	Nil obj;
	obj=++obj;
	obj.print();
	return 0;
}


