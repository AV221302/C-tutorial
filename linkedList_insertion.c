#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};

struct Node* insertAtFirst(struct Node*head,int data);
struct Node* insertInbetween(struct Node*head,int data,int index);

void linked_listtraversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element is :%d\n",ptr->data);
        ptr=ptr->next;
        
    }
}

struct Node* insertAtFirst(struct Node *head,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=88;
    return ptr;

}

struct Node* insertInbetween(struct Node*head,int data,int index){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
struct Node *p=head;
int i=0;

while(i!=index-1){
    p=p->next;
    i++;
}
ptr->next=p->next;
p->next=ptr;
ptr->data=data;


return head;

}

struct Node* insertAtEnd(struct Node * head,int data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    int i=0;
    struct Node*p=head;

    while(p->next!=NULL){
        p=p->next;

    }
   p->next=ptr;
    ptr->next=NULL;
    ptr->data=data;

    return head;

}


struct Node* insertAfter(struct Node *head,struct Node*prevNode,int data){

    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));

    ptr->next=prevNode->next;
    prevNode->next=ptr;
    ptr->data=data;

    return head;
}

void sorting_linked(struct Node *head){
    struct Node *i,*j;
    int temp;

    for (i=head;i!=NULL;i=i->next){
        for (j=i->next;j!=NULL;j=j->next){
            if (i->data>j->data){
                temp=i->data;
                i->data=j->data;
                j->data=temp;

            }
        }
    
    }

}




    



    


   
int main(){

    struct Node *head;
    struct Node*second;
    struct Node *third;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));


    head->data=8;
    head->next=second;

    second->data=9;
    second->next=third;

    third->data=7;
    third->next=NULL;
    head=insertAtFirst(head,78);
    //linked_listtraversal(head);


    head=insertInbetween(head,77,2);

    linked_listtraversal(head);
    

    head=insertAtEnd(head,22);
    linked_listtraversal(head);

    head=insertAfter(head,second,990);
    linked_listtraversal(head);
    printf("after the sorting linked list");

    sorting_linked(head);

    linked_listtraversal(head);




    return 0;

}