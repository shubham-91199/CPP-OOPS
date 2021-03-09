#include<iostream>
using namespace std;
#include<conio.h>
class ABC
{
	public:
		ABC()
		{
			cout<<"ABC CREATED"<<endl;
			
		}
	~ABC()
	{
		cout<<"GOOD BYE";
		}	
};
int main()
{
	ABC s;
	getch();
	return 0;
}

