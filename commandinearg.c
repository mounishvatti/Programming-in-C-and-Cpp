#include<stdio.h>

int main(int argc, char *argv[])
{
	int count_even=0, count_odd=0;
    int arr[5];
    printf("\nEnter the elements of the array: ");

	for (int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++){
        if(arr[i]%2==0){
            count_even = count_even + 1;
            if(arr[i]==2){
                count_even = count_even - 1;
            }
        }
        else{
            count_odd = count_odd + 1;
            if(arr[i]==5){
                count_odd = count_odd - 1;
            }
        }
    }
    printf("\nNumber of even elements: %d", count_even);
    printf("\nNumber of odd elements: %d", count_odd);
	
	return 0;
}
