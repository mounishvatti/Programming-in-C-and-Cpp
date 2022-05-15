#include<stdio.h>
int main(){
    char a;
    printf("\nenter the letter: ");
    scanf("%c",&a);
    switch(a){
        case 'y': 
        printf("\nhello");
        case 'n': 
        printf("what is this");
    }
}