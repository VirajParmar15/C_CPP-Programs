#include<iostream>
using namespace std;

class add{
	
	public:
		add(int a=2,int b=3)
		{
			cout<<"\n the sum is "<<a+b;
		}
};
int main()
{
	add(8,7);
	return 0;
} 
