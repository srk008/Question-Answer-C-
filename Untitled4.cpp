#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"ENter size of array"<<endl;
	cin>>size;
	int *ref=new int[size];
	cout<<"ENter array element"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>ref[i];
	}
	cout<<"You entered array is "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<ref[i]<<endl;
	}
}
