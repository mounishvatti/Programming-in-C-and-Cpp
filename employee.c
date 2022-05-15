#include<stdio.h>
#include<string.h>
//employee details
int main(){
    struct Employee{
        char name[20];
        int id;
        char address[50];
        char phno[15];
    };
    struct Employee emp[50];
    int i=-1,j,n;
    do{        
        printf("\n\n1.Enter Details \n2.Display Details \n3.Exit");
        printf("\n\nYour response: ");
        scanf("%d",&n);
        switch(n){
            case 1: //enter employee details
                printf("\nEMPLOYEES RECORD\n\n");
                printf("Enter detail of Employee %d\n",++i+1);
                printf("Employee name : ");
                scanf("%s",(emp[i].name));
                printf("Employee id no.: %d",i+1);
                printf("\nAddress: ");
                scanf("%s",(emp[i].address));
                printf("Phone number (give either landline or mobile number): ");
                scanf("%s",(emp[i].phno));
                if(i>0){
                    for(j=0;j<=i;j++){  //checking duplicate phone numbers
                        if(emp[j].phno==emp[i].phno){
                            printf("\nInvalid, this phone number is duplicate");
                            printf("\n---- TRY AGAIN ----\n");
                            i--;
                        }
                    }
                }
            break;
            case 2: //displaying the entered details
                for(j=0;j<=i;j++){
                    printf("\nEmployee name : %s",emp[j].name);
                    printf("\nEmployee id no.: %d",j+1);
                    printf("\nAddress: %s",emp[j].address);
                    printf("\nPhone number: %s\n",emp[j].phno);
                }
            break;
            default:printf("\n-- Exited successfully! --");
        }
    }
    while(n!=3);
    return 0;
}
