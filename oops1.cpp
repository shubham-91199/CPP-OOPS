#include<iostream>
using namespace std;

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
        cout<<"roll="<<roll<<"name="<<name<<"marks="<<marks;
    }

};
int main()
{
    student s;
    s.accept();
    s.display();
    return 0;
}
