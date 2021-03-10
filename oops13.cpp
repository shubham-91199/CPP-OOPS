#include<iostream>
using namespace std;

class Nil
{
	public:
		Nil(int a,int b)
		{
			cout<<"I am Nil";
			cout<<"sum is "<<a+b;
			
		}
				
};
class Akash:public Nil
{
	public:
		Akash(int x,int y,int z):Nil(x,y)
		{
			cout<<"I am akash";
			cout<<"my age is "<<z;
		}
};
int main()
{
	Akash obj(10,20,5);
	return 0;
}
