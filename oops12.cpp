#include<iostream>
using namespace std;

class Human
{
	public:
		Human(String s)
		{
			cout<<"I am "<<s;
			
		}
		~Human()
		{
			cout<<"Bye human";
		}
		
};
class Boy:public Human
{
	public:
		Boy()
		{
			cout<<"I am boy";
			
		}
		~Boy()
		{
			cout<<"Bye boy";
		}
};
class Baby:public Boy
{
	public:
		Baby()
		{
			cout<<"I am baby";
			
		}
		~Baby()
		{
			cout<<"Bye baby";
		}
};
int main()
{
	Baby b;
	return 0;
}
