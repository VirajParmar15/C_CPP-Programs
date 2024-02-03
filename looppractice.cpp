#include<stdio.h>
#include<iostream>
using namespace std;
int main() {


    //for loop
    int i;
    for(i=1; i<10; i++ ){
        printf("%d",i);
    }
    //while loop
    int j = 5;
    while (j > 0) {
        cout << "While Loop: "<< j << endl;
        j--;
    }

    //do-while loop
    int k = 6;
    do{
        cout << "Do While Loop: "<< k <<endl;
        k++;
        }while(k < 8);

    //for-each loop
    int l[10]={1,2,3,4,5,6,7};
    for(int x:l)
    {
        cout<<"For Each Loop: "<< x <<endl;
    }

    return 0;
}
