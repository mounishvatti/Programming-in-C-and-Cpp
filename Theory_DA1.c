#include<stdio.h>
#define SIZE 20
int main(){
    int nA, nB, nC = -1, A[SIZE], B[SIZE], a, b, c, i, flag;
    int *ptrC[SIZE + SIZE], *ptrA, *ptrB;
    scanf("%d", &nA);
    for (a = 0; a < nA; ++a)
        scanf("%d", &A[a]);
    scanf("%d", &nB);
    for (b = 0; b < nB; ++b)
        scanf("%d", &B[b]);
    ptrA = A;
    ptrB = B;
    for (a = 0, b = 0, c = 0; ; ){
        if(c % 2 == 0){ //odd element of A
            for(flag = 0; a < nA; ++a){
                if((*(ptrA + a)) % 2 != 0){
                    flag = 1;
                    break;
                }
            }
            // while((*(ptrA + ++a)) % 2 == 0);
            if(flag == 1){
                // ptrC[c++] = &A[a++];
                ptrC[c++] = (ptrA + a++);
            }
            else
                break;
        }
        else{ //odd element of B
            for(flag = 0; b < nB; ++b){
                if((*(ptrB + b)) % 2 != 0){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1){
                // ptrC[c++] = &B[b++];
                ptrC[c++] = (ptrB + b++);
            }
            else
                break;
        }
    }
    nC = c;
    for(c = 0; c < nC; ++c){
        printf("%d %c\n", *(ptrC[c]), ((c%2 + 1) == 1 ? '1' : '2'));
    }
    return 0;
}