#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("Enter three integers: ");
    scanf("%d%d%d",&a,&b,&c);
    if((b>a)&&(b>c))
       printf("Maximum of the three integers is: %d",b);  
    if((a>b)&&(a>c))
        printf("Maximum of the three integers is %d",a);
    if((c>b)||(c>a))
        printf("Maximum of the three integers is %d",c);
    return 0;
}



