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
    	void accept()
    	{
        	cin>>roll>>name>>marks>>address;

    	}
    	void display()
    	{
        	cout<<"roll="<<roll<<"name="<<name<<"marks="<<marks<<"address="<<address<<endl;
    	}


student()
    
		{
			roll=0;
			name="nothing";
			address="nothing";
			marks=0;
		}
};
int main()
{
    student s;
	s.accept();
	s.display();
	
    getch();
	return 0;
}
