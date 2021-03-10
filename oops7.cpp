#include<iostream>
using namespace std;
class Gadha
{
	public:
		void show();
};
void Gadha::show()
{
	cout<<"i am show method of g class";	
};
class Shape
{
	public:
		void show();
};
void Shape::show()
{
	cout<<"i am show method of shape class";
};
main()
{
Shape s;
s.show();

}
