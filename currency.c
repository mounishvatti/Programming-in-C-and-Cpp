#include<stdio.h>
int main(){
    int amt,twok,fivehundreds,hundreds,fifties,twenties,tens;
    printf("Enter number of days: ");
    scanf("%d",&amt);
    twok=amt/2000;
    amt=amt%2000;
    fivehundreds=amt/500;
    amt=amt%500;
    hundreds=amt/100;
    amt=amt%100;
    fifties=amt/50;
    amt=amt%50;
    twenties=fifties/20;
    amt=amt%20;
    tens=twenties/10;
    printf("%d 2000 notes %d 500 notes %d 50 notes %d 20 notes %d 10 notes.",twok,fivehundreds,hundreds,fifties,twenties,tens);
    return 0;
}
