#include<stdio.h>
#include<string.h>
int main(){
    struct Student{
        int number,reg_number;
        char name[20];
        char registered_courses[100];
        int credits;
    };
    struct Student info[5];
    int i,j,n;
    for(i=0;i<5;i++){
        printf("Enter the registration number: ");
        scanf("%d",&info[i].reg_number);
        printf("Enter the name: ");
        scanf("%s",&info[i].name);
        printf("Enter the registered courses: ");
        scanf("%s",&info[i].registered_courses);
        printf("Enter the credits: ");
        scanf("%d",&info[i].credits);
    }
    do{        
        printf("\n\n1.View Details \n2.Withdraw Courses \n3.Add Courses \n3.Exit");
        printf("\n\nYour response: ");
        scanf("%d",&n);
        switch(n){
            case 1:
            for(i=0;i<5;i++){
                printf("Registration number: ",info[i].number);
                printf("Name: ",info[i].name);
                printf("Registered Courses: ",info[i].registered_courses);
                printf("Total credits: ",info[i].credits);
            }
            break;
            case 2:
            printf("Enter your registration number: ");
            scanf("%d",&info[i].number); 
            if(info[i].number==info[i].reg_number){
                printf("Enter the course/courses you want to withdraw: ");
                scanf("%s",&);
