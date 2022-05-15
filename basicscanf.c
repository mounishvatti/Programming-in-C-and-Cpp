#include<stdio.h>
int main(){
    int day,year;
    char str[20],month[10],phno[10];
    printf("Enter your name: "); 
    scanf("%s",&str);
    printf("Enter your Date of Birth ");
    scanf("%s%d%d",&month,&day,&year);
    printf("Enter your mobile number: ");
    scanf("%s",&phno);
    printf("\nYour name is: %s ", str);
    printf("\nYour Date of Birth is: %s %d, %d ", month,day,year);
    printf("\nYour mobile number is: %s ", phno);
    return 0;
}
