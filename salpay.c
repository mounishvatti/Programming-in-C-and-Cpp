#include<stdio.h> 
#include<string.h>
int main(){
    double basic_salary, dearness_allowance, home_rental_allowance, city_compensatory_allowance, deductions, extra_hours, tax_amount, balance_amount;
    char a, b; 
    int t, h;
    printf("\nEnter basic salary: ");
    scanf("%lf", &basic_salary);

    dearness_allowance = basic_salary * 0.45;
    home_rental_allowance = basic_salary * 0.12;
    
    printf("\nDo you live in the city ('Y' for yes and 'N' for no): ");
    fflush(stdin);
    scanf("%c",&a);
    switch (a){
       case 'Y':
        city_compensatory_allowance = basic_salary * 0.1;
        break;
       case 'N': 
        city_compensatory_allowance = 0;
        break;
       default:  
        printf("Invalid input");
    }
    printf("\nDid you work overtime? ('Y' for yes and 'N' for no): ");
    fflush(stdin);
    scanf("%c",&b);

    if (b == 'Y'){
        printf("\nEnter '1' for day(s) & '2' for night(s): ");
        scanf("%d",&t);
        switch(t){

            case 1: 
                printf("\nNo of days overworked: ");
                scanf("%d",&h);
                extra_hours = h*120;
                break;

            case 2: 
                printf("\nNo of nights overworked: ");
                scanf("%d",&h);
                extra_hours = h*240;
                break;

            default: printf("Invalid Input");
        }
    }
    else {
        extra_hours = 0;
    }
    printf("\nEnter any deductions (Loan, EMI etc): ");
    scanf("%lf",&deductions);

    if(basic_salary > 105000){
        tax_amount = basic_salary * 0.1;
    }
    else tax_amount = 0;

    balance_amount = basic_salary - dearness_allowance - home_rental_allowance - city_compensatory_allowance - deductions + extra_hours - tax_amount;

    printf("\nBalance amount: %lf", balance_amount);
return 0;
}