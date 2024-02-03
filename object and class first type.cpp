#include <iostream>
using namespace std;

class Room 
{
    private:
    int l,b,h;
    
    public:
    void getdata()
    {
        cout<<"enter the l,b and h:";
        cin>>l>>b>>h;
    }
    void area()
    {
        cout<<"area="<<l*b;
    }
    void volume()
    {
        cout<<"volume="<<l*b*h;
    }
}r1;
int main()
{
    
	r1.getdata();
    r1.area();
    r1.volume();
    return 0;
} 
