#include<stdio.h>
#include<string.h>
#define size 10
int main(){
    struct Student{
        int age;
        char name[50];
        char address[100];
        char phnum[20];
    };
    struct Student info[size];
    int i,j,n;
    for(i=0;i<size;i++){
        printf("\nEnter your name: ");
        gets(info[i].name);
        printf("Enter your age: ");
        scanf("%d",&info[i].age);
        printf("Enter your address: ");
        gets(info[i].address);
        gets(info[i].address);
        printf("Enter your phone number: ");
        gets(info[i].phnum);
    }
    int max_index=0,max_length=strlen(info[0].name);
    for(i=1;i<size;i++){
        int length=strlen(info[i].name);
        if (length>max_length){
            max_length=length;
            max_index=i;
        }
    }
    printf("------- Student whose name has the maximum number of characters -------\n");
    printf("Name: %s\n",info[max_index].name);
    printf("Age: %d\n",info[max_index].age);
    printf("Address: %s\n",info[max_index].address);
    printf("Phone Number: %s\n",info[max_index].phnum);
}