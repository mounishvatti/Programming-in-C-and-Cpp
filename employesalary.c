#include<stdio.h>
int main(){
    int Employee_ID, workhours,amtperhour=1000,salary;
    printf("Enter Employee ID: ");
    scanf("%d",&Employee_ID);
    printf("Enter Hours at work: ");
    scanf("%d",&workhours);
    salary = workhours*amtperhour;
    printf("Your Employee_ID is: %d",Employee_ID);
    printf("\nYour salary is: Rs. %d",salary);
    return 0;
}