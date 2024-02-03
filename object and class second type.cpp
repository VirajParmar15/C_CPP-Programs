#include <iostream>
using namespace std;

class Room 
{
    public:
    
    int l,b,h;
    
    int area()
    {
        return l*b;
    }
    int volume()
    {
        return l*b*h;
    }
};
int main()
{
    Room r1;
    r1.l=3;
    r1.b=4;
    r1.h=5;
    
    cout<<"area"<<r1.area()<<endl;
    cout<<"volume"<<r1.volume()<<endl;
    return 0;
}
