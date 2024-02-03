#include <iostream>
using namespace std;

class Room 
{
    private:
    int l,b,h;
    
    public:
    Room()
    {
        cout<<"enter the l,b and h:"
        cin>>l>>b>>h;
        cout<<"\n volume :"<<l*b*h;
    }
    Room(int a,int c,int d)
    {
        cout<<"\n volume :"<<a*c*d;
    }  
}r1;
int main()
{
	int a,c,d;
	cout<<"enter a ,c and d:";
	cin>>a>>c>>d;
	Room(a,c,d);
    return 0;
} 
