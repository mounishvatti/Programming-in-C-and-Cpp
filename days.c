#include<stdio.h>
int main(){
    int days,years,weeks;
    printf("Enter number of days: ");
    scanf("%d",&days);
    years=days/365;
    weeks=(days%365)/7;
    days=days-((years*365)+(weeks*7));
    printf("%d Years %d Weeks %d Days.",years,weeks,days);
    return 0;
}
