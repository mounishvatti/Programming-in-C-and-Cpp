//book names in descending order
#include<stdio.h>
#include<string.h>
int main(){
   int i,j,n;
   char str[100][100],s[100];
   printf("\nEnter number of books: ");
   scanf("%d",&n);
   printf("\nEnter the book names: \n\n");
   for(i=0;i<n;i++){
      scanf("%s",str[i]);
   }
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(str[i],str[j])<0){
            strcpy(s,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],s);
         }
      }
   }
   printf("\nThe sorted order of names in descending order are: \n\n");
   for(i=0;i<n;i++){
      printf("%s\n",str[i]);
   }
return 0;
}
