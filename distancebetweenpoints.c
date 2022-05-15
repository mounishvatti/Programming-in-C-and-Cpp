//calculate distance between two points
#include<stdio.h>
#include<math.h>
int main(){
    float dist,x1,y1,x2,y2;
    char c;
    printf("Enter the first coordinates (x1,y1): ");
    scanf("%c%f%c%f%c",&c,&x1,&c,&y1,&c);
    printf("Enter the second coordinates (x2,y2): ");
    scanf("%c%f%c%f%c",&c,&x2,&c,&y2,&c);
    dist=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("The distance between the two points is: %.2f units. ",dist);
    return 0;
}
