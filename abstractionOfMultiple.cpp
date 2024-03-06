#include<iostream>
using namespace std;
class Abc{
	public:
	virtual void show(int arr[])=0;
};
class A : public Abc{
	public:
	void show(int ar[])
	{
		printf("i am A");
	}
};
class C : public Abc{
	public:
	void show(int arr[])
	{
		printf("i am C");
	}
};
int main(){
	
	int arr[]={5,4,5,3,3};
	A a;
	a.show(arr);
	
	C c;
	c.show(arr);
	
	
	
}
