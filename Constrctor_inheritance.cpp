#include<iostream>
using namespace std;
class A
{
	public:
	A()
	{
		cout<<"I am From parent "<<endl;
	}
};
class B : public A
{
	public:
		B()
		{
			cout<<"I am from Child class"<<endl;
		}
};
int main()
{
	B b1;
	
}
