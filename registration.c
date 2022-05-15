//question9
#include <stdio.h>
#include <string.h>
#define size 3
int main(){
    struct form{
        char username[50];
        char email[50];
        char address[50];
        char phno[10];
        char password[20];
        char c_password[20];
    };
    struct form emp[size];
    int i,j,n = 0, flag, ch;
    do{
        printf("\n\n1.Fill Form \n2.Display Details ");
        printf("\n\nYour response: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: //enter employee details
                printf("\nPlease fill the form below \n");
                printf("\nUsername : ");
                scanf("%s",(emp[n].username));
                printf("Address: ");
                scanf("%s",(emp[n].address));
                printf("Phone number: ");
                scanf("%s",(emp[n].phno));
                printf("email: ");
                scanf("%s",(emp[n].email));
                printf("password (should be of 8 digits and should contain only alphanumeric characters): ");
                scanf("%s",(emp[n].password));
                printf("re-enter password: ");
                scanf("%s",(emp[n].c_password));
               
                flag = 0;
                //checking duplicate phone numbers & passwords
                if((strlen(emp[n].password)==8)&&(strcmp(emp[n].c_password, emp[n].password) == 0)){
                    printf("\n--- Validation Successful ---");
                }
                else{
                    printf("\n--- Validation Failed ---");
                    flag++;
                }
                int counter = 0;
                for(j = 0; j < n; j++){
                    if(strcmp(emp[j].phno, emp[n].phno) == 0)
                        counter++;
                }
                if (counter>0){
                    printf("\n-- Invalid ... duplicate phone number found --");
                    printf("\n--- TRY AGAIN --\n");
                        flag++;
                }
                if(flag == 0)
                    n++;
            break;

            case 2: //displaying the entered details
                for(j=0;j<n;j++){
                    printf("\nusername: %s",emp[j].username);
                    printf("\nAddress: %s",emp[j].address);
                    printf("\nPhone number: %s",emp[j].phno);
                    printf("\nemail: %s\n",emp[j].email);
                }
            break;
            default:printf("\nInvaid!");
        }
    }  
    while(ch == 1 || ch == 2);
    return 0;
}