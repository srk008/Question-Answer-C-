#include<iostream>
using namespace std;
class rt
{
   private:
   int num1,num2;
   public:
   	void setvalue(int num1,int num2);
   
   void friend sq(rt q);	
};
void rt::setvalue(int num1,int num2)
{
	this->num1=num1;
	this->num2=num2;
};
void sq(rt q)
{
	
		cout<<"Squre is "<<(q.num1)*(q.num2)<<endl;
	
};
int main()
{
	int num1,num2;
	cout<<"ENtere two number "<<endl;
	cin>>num1>>num2;
	rt q;
	q.setvalue(num1,num2);
	sq(q);
}
