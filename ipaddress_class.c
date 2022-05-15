#include<stdio.h> 
#include<string.h> 

char findClass(char str[]) { 
    char arr[4]; 
    int i = 0; 
    while (str[i] != '.') { 
        arr[i] = str[i]; 
        i++; 
    } 
    i--; 
    int ip = 0, j = 1; 
    while (i >= 0){ 
        ip = ip + (str[i] - '0') * j; 
        j = j * 10; 
        i--; 
    }  
    if (ip >=1 && ip <= 126) 
        return 'A';  // Class A 
    else if (ip >= 128 && ip <= 191) 
        return 'B';  // Class B  
    else if (ip >= 192 && ip <= 223) 
        return 'C';  // Class C  
    else if (ip >= 224 && ip <= 239) 
        return 'D';  // Class D  
    else
        return 'E';  // Class E 
} 
int main() { 
    char str[12] =""; 
    printf("\nEnter IP Address: ");
    gets(str);
    char ipClass = findClass(str); 
    printf("Given IP address belongs to Class %c \n",ipClass); 

    return 0; 
} 
