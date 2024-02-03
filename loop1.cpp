#include<stdio.h>
using namespace std;
int main() {

    //for loop
    for(int i=1; i<10; i++){
        printf("%d",i);
    }

    //while loop
    int j = 1;
    while(j<10){
        printf("%d",j);
        j++;
    }

    //do-while loop
    int k=10;
    do{
        printf("%d\n", k);
        k++;
    }while(k<=9);

    return 0;
}
