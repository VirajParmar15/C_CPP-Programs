#include<iostream>
using namespace std;
class room{

    private:
    int l,b,h;

    public:
    void getdata(){
        cout<<"Enter l,b and h:";
        cin>>l>>b>>h;
    }
    void area(){
        cout<<"area="<<l*h;
    }
    void volume(){
        cout<<"volume="<<l*b*h;
    }
}r1;
    
    int main(){
        r1.getdata();
        r1.area();
        r1.volume();
        return 0;
    }
