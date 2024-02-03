#include<iostream>
using namespace std;
class data
{
	public:
	int a,b;
	
	public:
		void getdata()
		{
			cout<<"enter a,b=";
			cin>>a>>b;
		}
};
class sum:public data
{
	public:
		void add()
		{
			getdata();
			cout<<a+b;
		}
};
int main()
{
	sum s1;
	s1.add();
	return 0;
} 
