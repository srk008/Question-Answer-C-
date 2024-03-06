#include<iostream>
using namespace std;
class ArrayOperation
{
	private:
	//	int *ptr,temp,len,*fptr;
		public:
	virtual void performOperation()=0;

};
class Sorting : public ArrayOperation
{
	private:
		int *tptr,len3,temp;
	public:
	void setData(int a[],int size)
	{
		tptr=a;
		len3=size;
		}	
	void performoperation()
	{
		for(int i=0;i<len3;i++)
		{
			for(int j=i+1;j<len3;j++)
			{
				if(tptr[i]<tptr[j])
				{
					temp=tptr[i];
					tptr[i]=tptr[j];
					tptr[j]=temp;
				}
			}
		}
		cout<<"Array After sorting is "<<endl;
		for(int i=0;i<len3;i++)
		{
			cout<<tptr[i]<<endl;
		}
	}
};
class Union : public ArrayOperation
{
	private:
		int *ptr1,*ptr2,len;
	public:	
	void setData(int a[],int b[],int size)
	{
		ptr1=a;
		ptr2=b;
		len=size;
	}	
	void performOperation()
	{
		cout<<"Union Value are "<<endl;
		for(int i=0;i<len;i++)
		{
			for(int j=i+1;j<len;j++)
			{
				if(ptr1[i]==ptr2[j])
				{
					cout<<ptr1[i]<<endl;
				}
			}
		}
	}
};
class Deletion : public ArrayOperation
{
	private:
		int *uptr,len1,index;
	public:
	void SetData(int a[],int size,int ind)	
	{
		uptr=a;
		len1=size;
		index=ind;
	}
	void perfromOperation()
	{
		for(int i=0;i<len1;i++)
		{
			if(i==index)
			{
				for(int j=i;j<len1;j++)
				{
					uptr[j]=uptr[j+1];
				}
				len1--;
			}
		}
		for(int i=0;i<len1;i++)
		{
			cout<<uptr[i]<<endl;
		}
	}
};
class Prime : public ArrayOperation
{
	private:
		int *uptr,len1,count;
		public:
			void setData(int a[],int size)
			{
				uptr=a;
				len1=size;
			}
		void perfromOperation()
		{
			cout<<"Prime number are "<<endl;
			for(int i=0;i<len1;i++)
			{
				count=0;
				for(int j=1;j<=uptr[i];j++)
				{
					if(uptr[i]%j==0)
					{
						count++;
					}
				}
				if(count==2)
				cout<<uptr[i]<<endl;
			}
		}
};

class Majority : public ArrayOperation
{
	private:
		int *jptr,len2,count;
	public:	
	void SetData(int a[],int size)
	{
		jptr=a;
		len2=size;
	}	
	void perfromOperation()
	{
		for(int i=0;i<len2;i++)
		{
			count=0;
			for(int j=i+1;j<len2;j++)
			{
				if(jptr[i]==jptr[j])
				{
					count++;
				}
			}
			if(count>(len2/2))
			{
				cout<<jptr[i]<<endl;
			}
		}
	}
};
int main()
{
	int size,ind;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	int a[size],b[size];
	cout<<"Enter array element"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"ENter index that u want to delete:"<<endl;
	cin>>ind;
	cout<<"Enter 2nd array element"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>b[i];
	}
	
	Majority fe;
	fe.SetData(a,size);
	fe.performOperation();
	cout<<endl;
	
	Prime p1;
	p1.setData(a,size);
	p1.perfromOperation();
	cout<<endl;
	
	Deletion d;
	d.SetData(a,size,ind);
	d.perfromOperation();
	
	Union q;
	q.setData(a,b,size);
	q.performOperation();
	
  Sorting w;
  w.setData(a,size);
  w.performOperation();	
	
}

