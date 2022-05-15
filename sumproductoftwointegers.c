#include<stdio.h>
int main(){
    int a,b,sum,product;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    sum=a+b;
    product=a*b;
    printf("Sum is %d & Product is %d",sum,product);
    return 0;
}