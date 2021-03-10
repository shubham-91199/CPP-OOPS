#include<iostream>
using namespace std;

class Nil
{
	public:
	void smoke()
	{
		cout<<"WILL";
	}
	
		
};
class Jhumpa
{
	public:
		void smoke()
		{
			cout<<"MENTHOL";
		}
			
};
class Akash:public Nil,public Jhumpa
{
	public:
		void smoke()
		{
			cout<<"abc";
			Nil::smoke();
			Jhumpa::smoke();
		}
		
};
main()
{
	Akash A;
	A.smoke();
	
	
}
