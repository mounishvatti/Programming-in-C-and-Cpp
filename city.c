#include <stdio.h> 
#include <string.h>
#define size 100
int main(){
    struct form{
        char Name[50];
        int age[50];
        char landline[50];
        char srcitizen[50];
    };
    int i,j;
    struct form p[size];
    printf("\n--- Please fill the details --- \n");
    printf("\nEnter your name: ");
    scanf("%s",(p[i].Name));
    printf("Your age: ");
    scanf("%d",(p[i].age));
    printf("Landline: ");
    scanf("%s",(p[i].landline));
        
    if(p[i]age >= 65){ 
        strcpy(p[i].age,p[i].srcitizen);

    }
}
