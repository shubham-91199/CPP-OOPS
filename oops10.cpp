#include<iostream>
using namespace std;

class Nil
{
	public:
	void smoke()
	{
		cout<<"smoke";
	}
	
		
};
class Jhumpa
{
	public:
		void drink()
		{
			cout<<"drink";
		}
			
};
class Akash:public Nil,public Jhumpa
{

};
main()
{
	Akash A;
	A.drink();
	A.smoke();
}
