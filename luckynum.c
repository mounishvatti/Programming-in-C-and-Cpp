#include<stdio.h> 
int getSum(int num);
int main(){
    int day, month, year, num;
    printf("\nEnter the day (1-31): ");
    scanf("%d",&day);
    printf("Enter the month (1-12): ");
    scanf("%d",&month);
    printf("Enter the year: ");
    scanf("%d",&year);
    num = day + month + year;
    while (num>9){
        num=getSum(num);
    }
    printf("Lucky number is: %d ", num); 
}
int getSum(int num) { 
    int sum = 0; 
    while (num != 0) { 
        sum = sum + num % 10; 
        num = num / 10; 
    } 
    return sum; 
} 

 