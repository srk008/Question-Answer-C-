#include<iostream>
using namespace std;
class A
{
	public:
		A(int num)
		{
			cout<<"I am Parent class"<<num<<endl;
		}
};
class B:private A
{
	public:
		B():A(10)
		{
			cout<<"I am Child class "<<endl;
		}
};
int main()
{
	B b1;
}
