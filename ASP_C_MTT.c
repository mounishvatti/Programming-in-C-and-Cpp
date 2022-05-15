#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *next;
};
int createNode(struct node *start, int ele){
 struct node *ptr;
 ptr = start;

 if(start == NULL){
 start = (struct node*)malloc(sizeof(struct node));
 //printf("Start is null %d", ele);
 if(start == NULL)
 return -1;
 start -> data = ele;
 start -> next = NULL;
 }
 else{
 while(ptr -> next != NULL)
 ptr = ptr -> next;
 ptr -> next = (struct node*)malloc(sizeof(struct node));
 //printf("Start not null %d", ele);
 if(ptr -> next == NULL)
 return -1;
 ptr = ptr -> next;
 ptr -> data = ele;
 ptr -> next = NULL;
 }
 return 1;
}
void displayList(struct node *l1, struct node *l2, int n1, int n2){
 int i, j;
 struct node *ptr1;
 struct node *ptr2;
 ptr1 = l1;
 ptr2 = l2;

 for(i = 0, j = 0; i < n1 || j < n2; ){
 printf("\ni = %d, j = %d \n", i, j);
 if(i < n1){
 printf("%d %d\n", (ptr1 -> data), 1);
 ptr1 = ptr1 -> next;
 ++i;
 }
 if(j < n2){
 printf("%d %d\n", (ptr2 -> data), 2);
 ptr2 = ptr2 -> next;
 ++j;
 }
 }
 /*
 while(ptr1 -> next){
 int ele;
 ele = ptr1 -> data;
 printf("%d %d\n", ele, 1);
 ptr1 = ptr1 -> next;
 }
 */
}
void swapOnChoice(struct node *l1, struct node *l2, int n1, int n2, int choice){
 int i, j;
 struct node *ptr1, *ptr2;
 ptr1 = l1;
 ptr2 = l2;

 switch(choice){
 case 1 : //Alternating
 for(i = 0, j = 0; i < n1 && j < n2; ++i, ++j){
 if(i % 2 == 0){
 //swap
 /*
 temp = ptr1 -> data;
 ptr1 -> data = ptr2 -> data;
 ptr2 -> data = temp;
 */
 //Changing the structure
 struct node *tempptr;
 tempptr= ptr1 -> next;
 ptr1 -> next = ptr2 -> next;
 ptr2 -> next = tempptr;

 }
 ptr1 = ptr1 -> next;
 ptr2 = ptr2 -> next;
 }
 break;

 case 2 : //Mid swap
 for(i = (n1 / 2) - 1, j = (n2 / 2) - 1; i < n1 && j < n2; ++i, ++j){
 /*
 int temp;
 temp = ptr1 -> data;
 ptr1 -> data = ptr2 -> data;
 ptr2 -> data = temp;
 */
 struct node *tempptr;
 tempptr= ptr1 -> next;
 ptr1 -> next = ptr2 -> next;
 ptr2 -> next = tempptr;

 ptr1 = ptr1 -> next;
 ptr2 = ptr2 -> next;
 }
 break;
 }

}
int main(){
 struct node *l1;
 struct node *l2;
 l1 = NULL;
 l2 = NULL;
 int n1, n2, ele, i, ret, choice;
 printf("\nEnter length of array1 : ");
 scanf("%d", &n1);
 printf("\nEnter elements of array1 : ");
 for(i = 0; i < n1; ++i){
 scanf("%d", &ele);
 ret = createNode(l1, ele);
 if(ret == -1)
 printf("\nNode creation failed %d", ele);
 }

 //printf("\n L1 created %d", l1 -> data);

 printf("\nEnter length of array2 : ");
 scanf("%d", &n2);
 printf("\nEnter elements of array2 : ");
 for(i = 0; i < n2; ++i){
 scanf("%d", &ele);
 ret = createNode(l2, ele);
 if(ret == -1)
 printf("\nNode creation failed %d", ele);
 }

 //printf("\n L2 created %d", l2-> data);
 printf("\nEnter swap choice : ");
 scanf("%d", &choice);

 swapOnChoice(l1, l2, n1, n2, choice);

 displayList(l1, l2, n1, n2);

 return 0;
}