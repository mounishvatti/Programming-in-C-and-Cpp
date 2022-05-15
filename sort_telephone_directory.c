#include <stdio.h>
#include <string.h>
int main(){
struct jb{
    char name[25];
    char address[50];
    int telephone;
};
struct jb bonds[20];
struct jb temp;
int i = 0;
int x, a, b;
int phno;
char getName[25];
char getAddress[50];
int n;
printf("Enter no. of records : ");
scanf("%d", &n);
for (int i = 0; i < n; i++){
    phno = 0;
    printf("Enter your Name: ");
    scanf("%s", getName);
    strcpy(bonds[i].name, getName);


    printf("Enter your Address: ");
    scanf("%s", getAddress);
    strcpy(bonds[i].address, getAddress);


    printf("Enter your phone: ");
    scanf("%d", &phno);
    bonds[i].telephone = phno;
}

printf("initial array display\n");
for (x = 0; x < n; x++)
printf("%s\n", bonds[x].name);
/*sorting on the basis of name*/
for (a = 0; a < n - 1; a++)
    for (b = a + 1; b < n; b++){
        x = 0;
    while (bonds[a].name[x]){
        if ((bonds[a].name[x]) > (bonds[b].name[x])){
            temp = bonds[a];
            bonds[a] = bonds[b];
            bonds[b] = temp;
            break;
        }
        else if ((bonds[a].name[x]) < (bonds[b].name[x]))
        break;
        else
            x++;
    }
}
printf("modified array:");

for (x = 0; x < n; x++){
    printf("%s\n", bonds[x].name);
    printf("%s\n", bonds[x].address);
    printf("%d\n", bonds[x].telephone);
}
return (0);
}
