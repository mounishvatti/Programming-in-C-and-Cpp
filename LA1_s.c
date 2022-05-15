#include <stdio.h>
#include <string.h>

#define SIZE 100

void swapLong(long *a, long *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int charToInt(char c){
    if (c >= 48 && c <= 57)
        return (int)(c - 48);

    return -1;
}
void bubbleSort(char date[SIZE][11], long value[SIZE], int n){
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (value[j] > value[j + 1]){
                swapLong(&value[j], &value[j + 1]);
                char temp[11];
                strcpy(temp, date[j]);
                strcpy(date[j], date[j + 1]);
                strcpy(date[j + 1], temp);
            }
}

void sortDates(char date[SIZE][11], int n){
    int i;
    long value[SIZE];
    for (i = 0; i < n; ++i){
        value[i] = 0;
        int len = strlen(date[i]);
        if (len == strlen("DD/MM/YYYY")){
            value[i] += charToInt(date[i][0]) * 10;
            value[i] += charToInt(date[i][1]);
            value[i] += charToInt(date[i][3]) * 1000;
            value[i] += charToInt(date[i][4]) * 100;
            value[i] += charToInt(date[i][6]) * 10000000;
            value[i] += charToInt(date[i][7]) * 1000000;
            value[i] += charToInt(date[i][8]) * 100000;
            value[i] += charToInt(date[i][9]) * 10000;
        }
        else{
            value[i] += charToInt(date[i][0]) * 10;
            value[i] += charToInt(date[i][1]);
            value[i] += charToInt(date[i][3]) * 1000;
            value[i] += charToInt(date[i][4]) * 100;
            value[i] += 2 * 10000000;
            value[i] += 0 * 1000000;
            value[i] += charToInt(date[i][6]) * 100000;
            value[i] += charToInt(date[i][7]) * 10000;
        }
    }
    bubbleSort(date, value, n);
}
void printDate(char date[SIZE][11], int size){
    int i;
    for (i = 0; i < size; ++i)
        printf("%s\n", date[i]);
}
int main(){
    char date[SIZE][11];
    int n, i;
    printf("Enter array size : ");
    scanf("%d", &n);
    fflush(stdin);
    printf("Enter dates in DD/MM/YY or DD/MM/YYYY format : \n");
    for (i = 0; i < n; ++i){
        scanf("%s", date[i]);
    }
    printf("\nBefore Sorting:\n");
    printDate(date, n);
    sortDates(date, n);
    printf("\nAfter Sorting:\n");
    printDate(date, n);

    return 0;
}
