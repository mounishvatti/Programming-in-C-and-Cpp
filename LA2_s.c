#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    char bank[5];
    int balance;
    struct node *next;
};
struct node *transfer(struct node *start, char src[5], char dst[5], int amount){
    struct node *ptr, *temp;
    struct node *srcBlock = NULL, *dstBlock = NULL;
    int flag = 0;
    int srcFlag = 0, dstFlag = 0;
    char str[5];
    if (start == NULL){
        return NULL;
    }
    ptr = start;
    while (ptr != NULL){
        if (strcmp(ptr->bank, src) == 0){
            srcFlag = 1;
            srcBlock = ptr;
        }
        ptr = ptr->next;
    }
    ptr = start;
    while (ptr != NULL){
        if (strcmp(ptr->bank, dst) == 0){
            dstFlag = 1;
            dstBlock = ptr;
        }
        ptr = ptr->next;
    }
    if (srcFlag == 1 && dstFlag == 1){
        srcBlock->balance -= amount;
        dstBlock->balance += amount;
        if (srcBlock->balance <= 0){
            if (srcBlock == start){
                temp = start;
                start = start->next;
            }
            else{
                ptr = start;
                while (ptr->next != srcBlock)
                    ptr = ptr->next;

                temp = ptr->next;
                ptr->next = ptr->next->next;
            }
            free(temp);
        }
        if (dstBlock->balance <= 0){
            if (dstBlock == start){
                temp = start;
                start = start->next;
            }
            else{
                ptr = start;
                while (ptr->next != dstBlock)
                    ptr = ptr->next;

                temp = ptr->next;
                ptr->next = ptr->next->next;
            }
            free(temp);
        }
    }
    return start;
}
struct node *createNode(struct node *start, char bank[5], int balance){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL){
        printf("\nOut of Memory");
        exit(0);
    }
    strcpy(temp->bank, bank);
    temp->balance = balance;
    temp->next = NULL;
    if (start == NULL){
        start = temp;
    }
    else{
        struct node *ptr = start;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
    }
    return start;
}
void display(struct node *start){
    struct node *ptr = start;
    printf("\n\n");
    while (ptr != NULL){
        printf("%s %d\n", ptr->bank, ptr->balance);
        ptr = ptr->next;
    }
}
int main(){
    int size = 0;
    struct node *start = NULL;
    int i;
    char bank[5], destBank[5];
    int balance;
    scanf("%d", &size);
    for (i = 0; i < size; i++){
        scanf("%s", bank);
        scanf("%d", &balance);
        start = createNode(start, bank, balance);
    }
    scanf("%s", bank);
    scanf("%s", destBank);
    scanf("%d", &balance);
    start = transfer(start, bank, destBank, balance);
    display(start);
    return 0;
}