/* The representation of array data require 3 thing 
1. Array Space
2. Size
3. length( no.of element )
*/
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct array2{
    int p[20];
    int size;
    int length;

};

void display(struct array2 arr){
    printf("\nelemnets are\n");
    for(int i=0;i<arr.length;i++)
        printf("%d",arr.p[i]);
}

/*void append(struct array2 *arr,int x){
    if(arr->length<arr->size)
        arr->p[arr->length++]=x;
}*/

/*void insert(struct array2 *arr,int index,int x){
    int i;
    if(index>=0 && index<=arr->length)
    {
    for(i=arr->length;i>index;i--)
        arr->p[i]=arr->p[i-1];
    arr->p[index]=x;
    arr->length++;
    }
}*/

int Delete(struct array2 *arr,int index){
    int i;
    int x=0;
    if(index>=0 && index<arr->length){
        x=arr->p[index];
        for(i=index;i<arr->length-1;i++){
            arr->p[i]=arr->p[i+1];
        }
        arr->length--;
        return x;
        }
    return 0;
}
int main(){
    //revision
    struct array2 arr={{2,3,4,5,6},10,5};
    //append(&arr,10);
    //insert(&arr,3,7);
    printf("%d\n",Delete(&arr,2));
    display(arr);
return 0;
}

