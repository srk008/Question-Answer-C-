#include<iostream>
using namespace std;
int main()
{
	int size,temp;
	cout<<"Enter size"<<endl;
	cin>>size;
	int *ref=new int[size];
	for(int i=0;i<size;i++)
	{
		cin>>ref[i];
	}
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(ref[i]<ref[j])
			{
				temp=ref[i];
				ref[i]=ref[j];
				ref[j]=temp;
			}
		}
	}
	for(int i=0;i<size;i++)
	{
		cout<<ref[i]<<endl;
	}
}
