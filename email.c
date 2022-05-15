//question6
#include <stdio.h>
#include <string.h>
#define size 3
int main(){
    struct form{
        char email[50];
        char correct_answer[50];
        char secret_answer[50];
        char phno[10];
        char password[10];
        char c_password[10];
        char pwd[10];
        char new_password[10];
        char new_c_password[10];
        char mail[50];
    };
    struct form p[size];
    int i,j,n,m;
    do{        
        printf("\n\n1.Register \n2.Login \n3.Reset Password \n4.Display");
        printf("\n\nYour response: ");
        scanf("%d",&n);
        switch(n){ 
            case 1: //enter details
            printf("\n--- Please fill the details --- \n");
            printf("\nemail: ");
            scanf("%s",(p[i].email));
            printf("Phone number: ");
            scanf("%s",(p[i].phno));
            printf("--- Answer this secret question --- \n");
            printf("Your favourite music genre: ");
            scanf("%s",(p[i].secret_answer));
            printf("password: ");
            scanf("%s",(p[i].password));
            printf("confirm password: ");
            scanf("%s",(p[i].c_password));

            if(strcmp(p[i].password,p[i].c_password)==0){ //validating the password
                strcpy(p[i].mail,p[i].email); //assign values for future validation
                strcpy(p[i].pwd,p[i].password); //assign values for future validation
                strcpy(p[i].correct_answer,p[i].secret_answer);//assign values for future validation
                printf("\n--- Account Created Successfully. ---");
            }
            else printf("\nPasswords do not match\nAccount cannot be created please try again later."); //failed validation
            break;
            case 2:
            printf("\nemail: ");
            scanf("%s",(p[i].email));
            printf("password: ");
            scanf("%s",(p[i].password));
            if(strcmp(p[i].password,p[i].pwd)==0){
                if(strcmp(p[i].email,p[i].mail)==0){ //check if password is correct
                    printf("\n--- Logged in successfully ---");
                }
            }
            else printf("\nIncorrect password!"); //if the password is incorrect print invalid
            break;
            case 3:
            printf("\nemail: ");
            scanf("%s",(p[i].email));
            if(strcmp(p[i].email,p[i].mail)==0){ //validate email
                printf("--- Answer this secret question ---\n");
                printf("Your favourite music genre: ");
                scanf("%s",(p[i].secret_answer));
            }       
            if(strcmp(p[i].secret_answer,p[i].correct_answer)==0){ //check if the secret answer is correct
                    printf("--- Reset your password ---");
                    printf("\nEnter new password: ");
                    scanf("%s",(p[i].new_password));
                    printf("confirm new password: ");
                    scanf("%s",(p[i].new_c_password));
                    if(strcmp(p[i].new_password,p[i].new_c_password)==0){ //check new entered pwd matches with the confirm pwd
                        strcpy(p[i].password,p[i].new_password); //assign the new password to the old password
                        strcpy(p[i].c_password,p[i].new_c_password);
                        printf("--- Password reset successfull ---");
                    }
                    else{
                        printf("\n--- Passwords doesn't match! ---\n");
                        printf("\n--- Password reset failed ---");
                    }
            }
            else printf("---- Incorrect Answer, couldn't reset password !! ----");
            break;
            case 4: //displaying details 3
            for(i=1;i<size-1;i++){
                printf("\nemail: %s",p[i].email);
                printf("\nPhone number: %s",p[i].phno);
            }
            break; 
            default: printf("Invalid option");
        }
    }
    while(n>=1&&n<=3); 
return 0;
}