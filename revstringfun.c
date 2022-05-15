//reverse the string using string function
#include <stdio.h>
#include <string.h>
int main(){
   char str[100];
   printf("Enter String: \n");
   scanf("%s",&str);
   printf("Reversed String: %s\n",strrev(str));
   return 0;
}