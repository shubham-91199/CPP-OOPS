//class create,object declare and function call in main
#include<iostream>
using namespace std;

class bio
{
	int number;
	int roll;
	
	public:
	void enter()
	{
		cin>>number>>roll;
		
	}
	void output()
	{
		cout<<number<<roll;
	}
};
int main()
{
	bio obj;
	obj.enter();
	obj.output();
	return 0;
	
	
}
