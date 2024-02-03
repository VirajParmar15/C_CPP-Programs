/*
Display( )
Add( x ) / Append( x )
Insert( index , x )
Delete( index )
Search( x )
Get( index )
Set( index , x )
Max( ) / Min( )
Reverse( )
Shift( ) / Rotate( )
*/
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct array1{
    int *A;
    int size;
    int length;
};

void display(struct array1 arr){
    printf("\nelements are \n");
    for (int i = 0 ;i < arr.length; i++){
        cout << arr.A[i]<<" ";
    }
}

int main(){
    struct array1 arr;
    int n,i;
    printf("enter the size of an array");
    scanf("%d",&arr.size);

    arr.A=new int[arr.size];
    arr.length=0;

    printf("enter the numbers of arrays");
    scanf("%d",&n);

    printf("enter the all elements");
    for(i=0;i<n;i++)
        scanf("%d",&arr.A[i]);
    arr.length=n;

    display(arr);


return 0;
}

