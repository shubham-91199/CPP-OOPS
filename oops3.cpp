#include<iostream>
using namespace std;
#include<conio.h>
class student
{
    private:
    	int roll;
    	char *name;
    	char *address;
    	int marks;
    public:
    	void display()
    	{
        	cout<<"roll="<<roll<<"name="<<name<<"marks="<<marks<<"address="<<address<<endl;
    	}


student(int r,char *n,char *a,int m)
    
		{
			roll=r;
			name=n;
			address=a;
			marks=m;
		}
};
int main()
{
    student s(10,"ABC","DGP",80);
	s.display();
	
    getch();
	return 0;
}
