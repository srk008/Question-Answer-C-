#include<iostream>
using namespace std;
class rt
{
	int num;
	public:
		void virtual setdata()=0;
	
};
class ui :public rt
{
	int num;
	public:
		void setdata()
		{
			cout<<"The value is ui "<<endl;
		}
};
class h :public rt
{
	public:
		void setdata()
		{
			cout<<"I am from h class how are you  "<<endl;
		}
};
int main()
{
	int num;
//	cout<<"ENter any number:"<<endl;
//	cin>>num;
	ui d;
	d.setdata();
//	d.setdata();
 h n;
 n.setdata();
 
 
	
//	h hi;
//	hi.setdata();
	
}
