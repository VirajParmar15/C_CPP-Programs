// They are 3 methods of declaring 2D arrays
// We can access 2D array using 2indices (one for row and other for column)
//1. Normal Declaration
//2. Array Of Pointers
//3. Double Pointer

#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};
    int *B[3];
    int **C;
    int i,j;
        
    B[0]=new int[4];
    B[1]=new int[4];
    B[2]=new int[4];


    C=new int*[3];
    C[0]=new int[4];
    C[1]=new int[4];
    C[2]=new int[4];

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",C[i][j]);
            }
        printf("\n");
    }


    


return 0;
}