#include<stdio.h>
#include<string.h>

#define SIZE 5
#define TOTAL_ENTRIES 30

double avgRainfall(double rainfall[SIZE][TOTAL_ENTRIES], int i){
    int j;
    double avg=0;
    for (j=0; j<TOTAL_ENTRIES;j++){
        avg+=rainfall[i][j];
    }
    avg /= TOTAL_ENTRIES;
    return avg;
}
int main(){
    int i,j;
    double rainfall[SIZE][TOTAL_ENTRIES];
    printf("\nEnter the rainfall in inches for each month: ");
    for(i=0; i<SIZE;i++){
        printf("\nEnter for month %d: ",i+1);
        for(j=0; j<TOTAL_ENTRIES;j++){

            scanf("%lf",&rainfall[i][j]);
        }
    }
    double monthlyTotals[SIZE];
    for (i=0; i<SIZE; i++){
        monthlyTotals[i]=avgRainfall(rainfall,i);
        printf("\nAverage rainfall of month %d = %f",i+1,monthlyTotals[i]);
    }
    return 0;
}
