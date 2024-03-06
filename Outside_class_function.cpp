#include<iostream>
using namespace std;
class Rate
{
	private:
		int num;
	public:
	void findsquare(int num);	
};
void Rate::findsquare(int num)
{
	cout<<"The square is "<<num*num<<endl;
};
int main()
{
	int num;
	cout<<"Enter any number :"<<endl;
	cin>>num;
	Rate w;
	w.findsquare(num);
}
