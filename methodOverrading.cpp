#include<iostream>
using namespace std;
class ReserveBank
{
	protected:
		int maxrate;
		public:
	virtual	void appymax()
		{
			maxrate=16;
		}
};
class Cooprative : public ReserveBank
{
	public:
		void appymax()
		{
			maxrate=10;
			cout<<"Your interest rate is "<<maxrate<<endl;
		}
};
class Nationalize : public ReserveBank
{
	public:
		void appymax()
		{
			maxrate=8;
			cout<<"Your interest rate is "<<maxrate<<endl;
		}
		
};
int main()
{
	Nationalize n;
	n.appymax();
	
	Cooprative s;
	s.appymax();
}
