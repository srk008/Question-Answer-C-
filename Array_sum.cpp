#include<iostream>
using namespace std;
int main()
{
   int size,sum=0;
   cout<<"Enter size of array"<<endl;
   cin>>size;
   int *ref=new int [size];
   cout<<"ENter array element "<<endl;
   for(int i=0;i<size;i++)
   {
   	cin>>ref[i];
   }
   for(int i=0;i<size;i++)
   {
   	sum=sum+ref[i];
   }
   cout<<"Sum of all number is "<<sum<<endl;
}
