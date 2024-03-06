#include<iostream>
using namespace std;
class Value
{
	virtual void checkPrime()=0;
};
class Prime : public Value
{
	public:
	void checkPrime(int num) override
	{
		int count=0;
		for(int i=1;i<=num;i++)
		{
			if(num%i==0)
			{
				count++;
			}
		}
		if(count==2)
		cout<<"Given number is prime number:"<<endl;
	}
};
class Duck : public Value
{
	public:
	void checkPrime(int num) override
	{
		int digit,flag=0;
		while(num!=0)
		{
			digit=num%10;
			if(digit==0)
			{
				flag=1;
				break;
			}
			num=num/10;
		}
		if(flag==1)
		cout<<"Given number is duck number:"<<endl;
		else
		cout<<"Given Number is not duck number:"<<endl;
	}
};
int main()
{
	int num;
	cout<<"Enter any number:"<<endl;
	cin>>num;
	Duck D;
	D.checkPrime(num);
	
	prime P;
	P.checkPrime(num);
	
}
