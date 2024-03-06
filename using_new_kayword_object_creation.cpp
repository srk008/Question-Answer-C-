#include<iostream>
using namespace std;
class find
{
	private:
		int num,size;
	public:
		void table(int num,int size)
		{
			for(int i=1;i<size;i++)
			{
				cout<<num*i<<endl;
			}
		}
		
};
int main()
{
	int num,size;
	cout<<"Enter two number :"<<endl;
	cin>>num>>size;
	find *ref=new find();
	ref->table(num,size);
}
