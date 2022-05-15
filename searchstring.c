#include <stdio.h>
#include <string.h>
int searchstring(int , char[100], char[100][100]);
int main(){
	char str[100];
	char s[100][100];	
	int i,n;	
	printf("\nEnter Number of Students: ");
	scanf("%d", &n);
	printf("\nEnter the names of Students: ");
	for (i = 0; i < n; ++i){
		scanf("%s", s[i]);
	}
	printf("\nEnter the student to be searched: ");
	scanf("%s", str);
	int ret;
	ret = searchstring(n, str, s);
	if (ret == 1)
		printf("\n%s is present in the array", str);
	else
		printf("\n%s is not present in the array",str);
}
int searchstring(int n, char str[100], char s[100][100]){
	int i;
	for (i = 0; i < n; ++i){
		if (!strcmp(str, s[i])){
			break;
		}
	}
	if (i!= n){
		return 1;
	}
	else{
		return 0;
	}
}