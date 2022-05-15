//question2
#include <stdio.h>
void knapsack(int n, float wt[], float pro[], float cap){ 
    float x[20], tp = 0;
    int i, j, u;
    u = cap;
    for (i = 0; i < n; i++) 
        x[i] = 0.0;
        for (i = 0; i < n; i++){ 
            if (wt[i] > u)
                break; 
            else {
                x[i] = 1.0;
                tp = tp + pro[i]; 
                u = u - wt[i];
            } 
        }
    if (i < n)
        x[i] = u / wt[i];
        tp = tp + (x[i] * pro[i]);
        printf("\nThe result vector is:- "); 
            for (i = 0; i < n; i++)
                printf("%f\t", x[i]); 
                printf("\nMaximum profit is:- %f", tp);

}
int main(){
    float wt[20], pro[20], cap; 
    int num, i, j;
    float ratio[20], temp;
    printf("\nEnter the no of objects: "); 
    scanf("%d", &num);
    printf("\nEnter the weights and profits of each object: "); 
    for (i = 0; i < num; i++){
        scanf("%f %f", &wt[i], &pro[i]); 
    }
    printf("\nEnter the capacity of knapsack: "); 
    scanf("%f", &cap);
    for (i = 0; i < num; i++){ 
        ratio[i] = pro[i] / wt[i];
    }
    for (i = 0; i < num; i++){
        for (j = i + 1; j < num; j++){
            if (ratio[i] < ratio[j]) { 
                temp = ratio[j]; 
                ratio[j] = ratio[i]; 
                ratio[i] = temp;
                temp = wt[j];
                wt[j] = wt[i]; 
                wt[i] = temp;
                temp = pro[j]; 
                pro[j] = pro[i]; 
                pro[i] = temp;
            } 
        }
    }
    knapsack(num, wt, pro, cap);
    return(0); 
}