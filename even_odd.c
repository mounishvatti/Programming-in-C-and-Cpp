#include<stdio.h> 
int main(){
    long int m,n,i,sum_odd=0,sum_even=0;
    printf("\nEnter the range: ");
    scanf("%ld, %ld",&m, &n);
    //even
    for (i=m;i<=n;i++){
        if(i%2==0){
            sum_even = sum_even + i*i;
        }
    }
    printf("\nSum of squares of even numbers in the range is : %ld",sum_even);
    //odd
    for (i=m;i<=n;i++){
        if(i%2!=0){
            sum_odd = sum_odd + i*i*i;
        }
    }
    printf("\n\nSum of cubes of odd numbers in the range is : %ld",sum_odd);

    if((m>99)&&(n>99)){
        if((n-m)>100){
            printf("\n\nThe values meet the given condition.");  
        }
        else{
        printf("\nThe values do not meet the given condition");
        }
    }
    else{
        printf("\nThe values do not meet the given condition");
    }
}