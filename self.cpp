#include<iostream>
using namespace std;

class computer{
    public:
    string name;
    int age;

    public:
    computer(){
        name="viraj";
        age=25;
    }

    void update(){
        age=30;
    }
};
int main(){

computer c1;
computer c2;
c1.name="manali";
c1.age=12;

c2.update();

    cout<< "c1 name: " << c1.name << ", age: " << c1.age <<endl;
    cout<< "c2 name: " << c2.name << ", age: " << c2.age <<endl;

    return 0;
}