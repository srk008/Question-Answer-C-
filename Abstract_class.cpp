#include<iostream>
using namespace std;
class qw
{
	protected:
		int num1,num2;
	public:
		void virtual find()=0;
	
		void virtual display()=0;
	
//		void setdata(int num1,int num2);
//		void friend findsq(qw t);
};
//void qw:: setdata(int num1,int num)
//{
//	this->num1=num1;
//	this->num2=num2;
//};
//void findsq(qw t)
//{
//	cout<<"Square is "<<num1*num2<<endl;
//};
class wer : public qw
{
	public:
		void find() {
			cout<<"Cube root is "<<num1*num1*num1<<endl;
		}
		void display()
		{
			cout<<"I am from class wer"<<endl;
		}
};
class yu : public qw
{
	public:
		void find() {
		 cout<<"When you multplay given number by 5 then result will be "<<num2*5<<endl;	
		}
		void display()
		{
			cout<<"I am from class yu "<<endl;
		}
};
int main()
{
	int num1,num2;
	cout<<"Enter two number "<<endl;
	cin>>num1>>num2;
	yu j;
	j.find();
	j.display();
	
	wer q;
	q.find();
	q.display();
}

