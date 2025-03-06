#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node* ptr);
int main(){
    struct Node * head;
    struct Node * second;

struct Node * third;

//allocate memory for nodes in the linked list in the heap
head=(struct Node *)malloc(sizeof(struct Node));

second=(struct Node *)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
head->data=7;
head->next=second   ;
//link first and second node
second->data=11;
second->next=third;


third->data=5;
third->next=NULL;

linkedListTraversal(head);


    return 0;

}

void linkedListTraversal(struct Node*ptr){

   while (ptr!=NULL){
    printf("Element :%d\n",ptr->data);
    ptr=ptr->next;
   }


}