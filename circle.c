#include<stdio.h>
int main(){
    float r,area, perimeter;
    float pi = 3.14f;
    printf("Enter radius: ");
    scanf("%f", &r);
    area=pi*r*r;
    perimeter=2*pi*r;
    printf("Area is: %.2f",area);
    printf("\nPerimeter is: %.2f",perimeter);
    return 0;
}