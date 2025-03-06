#include <stdio.h>

#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};


void linkedList_Traversal(struct Node *head){

    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr=head;

    // while(ptr->next!=head){
    //     printf("Element :%d\n",ptr->data);

    //     ptr=ptr->next;

        
        
    // }

    // printf("Element :%d\n",ptr->data);

    //We can do this by do while loop also 

    do {
        printf("Element : %d\n",ptr->data);
    
        
        ptr=ptr->next;
    }while (ptr->next !=head);
}

int main(){

    struct Node *head;
    struct Node *Second;
    struct Node *Third;

    struct Node *Fourth;

    struct Node *Fifth;

    head=(struct Node *) malloc(sizeof(struct Node));
Second=(struct Node *) malloc(sizeof(struct Node));
Third=(struct Node *) malloc(sizeof(struct Node));
    Fourth=(struct Node *) malloc(sizeof(struct Node));
Fifth=(struct Node *) malloc(sizeof(struct Node));


head->data=3;

head->next=Second;

Second->data=5;

Second->next=Third;


Third->data=7;

Third->next=Fourth;
Fourth->data=2;

Fourth->next=Fifth;

Fifth->data=9;

Fifth->next=head;

linkedList_Traversal(head);








}