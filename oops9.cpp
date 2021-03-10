#include<iostream>
using namespace std;

class Human
{
	private:
		int a;
	public:
		int b;
	protected:
		int c;	
};
class Boy: private Human
{
	private:
		
	public:
		
	protected:
			
};
main()
{
	Boy B;
	B.b=10;
}
