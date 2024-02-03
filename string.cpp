#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main() {

    /*char name[] = "Shradha Khapra";
    char course[] = {'a','p','n','a',' ','c','o','l','l','e','g','e','\0'};

    for(int i=0; name[i] != '\0'; i++) {
        printf("%c",name[i]);
    }
    printf("\n");*/

    /*char firstName[40];
    printf("enter first name : ");
    scanf("%s", firstName);
    printf("you first name is %s\n", firstName);
    char fullName[40];
    printf("enter full name : ");
    scanf("%s", fullName);
    printf("you first name is %s\n", fullName);*/

    /*char fullName[40];
    printf("enter full name : ");
    fgets(fullName, 40 , stdin);
    puts(fullName);*/
    /*char fullname[40];
    printf("enter full name : ");
    fgets(fullname , 40 , stdin);
    puts(fullname);*/

    char name[] = "Shradha";
    int length = strlen(name);
    printf("the length of name : %d\n", length);

    char oldVal[] = "oldValue";
    char newVal[50];
    strcpy(newVal, oldVal);
    puts(newVal);

    char firstStr[50] = "Hello ";
    char secStr[] = "World";
    strcat(firstStr, secStr);
    puts(firstStr);

    char str1[] = "Apple";
    char str2[] = "Banana";
    printf("%d\n", strcmp(str1, str2));



    return 0;
}