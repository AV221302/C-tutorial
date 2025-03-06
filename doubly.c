#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;

};

void linkedList_traversal(struct Node *head){
    struct Node *ptr=head;
    while(ptr!=NULL){
        printf("Element is :%d\n",ptr->data);

        ptr=ptr->next;
    }


}

void inverselinkedList_traversal(struct Node *last_node){
    struct Node *ptr=last_node;
    while(ptr!=NULL){
        printf("Element is :%d\n",ptr->data);
        ptr=ptr->prev;
    }
}

struct Node *insertdoubly_linked(struct Node *head,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    head->prev=ptr;

    ptr->data=data;
    if (head!=NULL){
        head->prev=ptr;
    }
    
    head=ptr;
    
    return head;
}

struct Node*insertdoubly_linked_atidx(struct Node*head,int data,int idx){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node *p=head;
    int i=0;
    while(i!=idx-1,i++){
        p=p->next;


    }
  ptr->next=p->next;
  p->next=ptr;
  ptr->data=data;

  return head;
}
struct Node * inserting_atend(struct Node*head,int data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node *p=head;

    while(p->next!=NULL){
        p=p->next;

    }
    p->next=ptr;
    ptr->next=NULL;
    ptr->data=data;

    return head;


    

}
struct Node *deletionAthead(struct Node *head){
    struct Node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
    }
struct Node *deletion_In_between(struct Node *head,int idx){
    struct Node *p=head;
    struct Node *q=head->next;
    int i=0;
    while(i!=idx-1){
        p=p->next;
        q=q->next;
        i++;
        


    }
    p->next=q->next;
    free(q);
    return head;
}

struct Node* deletion_at_end(struct Node*head){
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;

    }
    p->next=q->next;
    free(q);
    return head;


}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    head->prev=NULL;
    head->next=second;
    head->data=5;

    second->prev=head;

    second->next=third;
    second->data=9;

    third->prev=second;
    third->next=fourth;
    third->data=8;

    fourth->prev=third;
    fourth->next=NULL;
    fourth->data=3;

    linkedList_traversal(head);


    inverselinkedList_traversal(fourth);
    printf("after the inserting the data as a head\n");
    head=insertdoubly_linked(head,45);
    linkedList_traversal(head);
    head=insertdoubly_linked_atidx(head,56,2);
    linkedList_traversal(head);

    head=inserting_atend(head,67);
    linkedList_traversal(head);
    printf("after the deletion of head\n");

    head=deletionAthead(head);
    linkedList_traversal(head);

    head=deletion_In_between(head,2);
    linkedList_traversal(head);

    head=deletion_at_end(head);
    linkedList_traversal(head);







}
