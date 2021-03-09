#include<iostream>
using namespace std;
#include<conio.h>
class student
{
    private:
    	int roll;
    	char name[20];
    	int marks;
    public:
    	void accept()
    	{
        	cin>>roll>>name>>marks;

    	}
    	void display()
    	{
        	cout<<"roll="<<roll<<"name="<<name<<"marks="<<marks<<endl;
    	}

};
int main()
{
    student s[3];
	for(int i=0;i<=4;i++)
		{
			s[i].accept();
		}
	for(int i=0;i<=4;i++)
	{
		s[i].display();
		}	
    getch();
	return 0;
}
