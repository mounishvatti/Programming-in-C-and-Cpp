#include <stdio.h>
#include <stdlib.h>
int main(){
    int size1;
    int size2;
    printf("\nEnter the size of the first array: ");
    scanf("%d", &size1);
    int *arrayA = (int *)malloc(sizeof(int) * (size1 + 1));
    arrayA[size1] = 0;
    printf("\nEnter the elements of the first array: ");
    for (int i = 0; i < size1; i++){
        scanf("%d", &arrayA[i]);
    }
    printf("\nEnter the size of the second array: ");
    scanf("%d", &size2);
    int *arrayB = (int *)malloc(sizeof(int) * (size2 + 1));
    arrayB[size2] = 0;
    printf("\nEnter the elements of the second array: ");
    for (int i = 0; i < size2; i++){
        scanf("%d", &arrayB[i]);
    }
    int total_size = size1 + size2;
    int **Parray = NULL;
    Parray = malloc(sizeof(int *) * (total_size));
    int *temp_ptr_arrayA = NULL;
    temp_ptr_arrayA = arrayA;
    int **temp_ptr_Parray = Parray;
    for (; *temp_ptr_arrayA != 0; temp_ptr_arrayA++){
        if (*temp_ptr_arrayA % 2 != 0){
            *temp_ptr_Parray = temp_ptr_arrayA;
            temp_ptr_Parray = temp_ptr_Parray + 2;
        }
    }
    int *temp_ptr_arrayB = NULL;
    temp_ptr_arrayB = arrayB;
    temp_ptr_Parray = Parray + 1;
    for (; *temp_ptr_arrayB != 0; temp_ptr_arrayB++){
        if (*temp_ptr_arrayB % 2 == 0){
            *temp_ptr_Parray = temp_ptr_arrayB;
            temp_ptr_Parray = temp_ptr_Parray + 2;
        }
    }
    for (int i = 0; i < total_size; i++){
        int a = (i + 3) % 2;
        if (a == 0){
            a = 2;
        }
        printf("output: %d %d\n", *Parray[i], a);
    }
}