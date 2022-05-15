#include <stdio.h>
#include <math.h>

int convertbinarytodecimal(long long);
int convertdecimaltobinary(long long);
int main() {
    int a;
    long long n;
    printf("\n1. BINARY TO DECIMAL");
    printf("\n2. DECIMAL TO BINARY");
    printf("\n3. EXIT");
    printf("\n\nEnter your response: ");
    scanf("%d", &a);
    switch(a){
        do{
            case 1: printf("Enter a binary number: ");
                    scanf("%lld", &n);
                    printf("%lld in binary = %d in decimal", n, convertbinarytodecimal(n));
                    return 0;
                    break;

            case 2: printf("Enter a decimal number: ");
                    scanf("%lld", &n);
                    printf("%lld in decimal = %d in binary", n, convertdecimaltobinary(n));
                    return 0;
                    break;

            case 3: printf("Exited Successfully !!");
        
            default: printf("Invalid Option");
        
        }while(a>0);
    }
}
int convertbinarytodecimal(long long n) {
    int decimal = 0, i = 0, rem;
    while (n!=0) {
        rem = n % 10;
        n /= 10;
        decimal += rem * pow(2, i);
        ++i;
    }
  return decimal;
}
int convertdecimaltobinary(long long n) {
    long long binary = 0;
    int rem, i = 1;
    while (n!=0) {
        rem = n % 2;
        n /= 2;
        binary += rem * i;
        i *= 10;
    }
  return binary;
}