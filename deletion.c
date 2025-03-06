#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node *next;
    int data;

};

void linked_ListTraversal(struct Node *head){
    struct Node *ptr=head;


    while(ptr!=NULL){
        printf("Element :%d\n",ptr->data);
        ptr=ptr->next;
       
    }


} 

struct Node *  deletionAtfirst(struct Node *head){
    struct Node *ptr=head;
    
    head=head->next;
    free(ptr);
    return head;

    
}

struct Node *deletionInBetween(struct Node *head,int index){
    struct Node *p;
    struct Node *q;
    p=head;
    q=head->next;
    int i=0;
    while ( i !=index-1){
        p=p->next;
        q=q->next;
        i++;
    }

    p->next=q->next;
    free(q);

    return head;

}

struct Node *deletionAtEnd(struct Node * head){
    struct Node *p;
    struct Node *q;


    p=head;
    q=head->next;

    while(q->next!=NULL){
        p=p->next;

        q=q->next;

    }

    p->next=q->next;
    free(q);

    return head;

}


struct Node *deletionat_value(struct Node *head,int value){
    struct Node *p;
    struct Node *q;
    p=head;
    q=head->next;
    int i=0;
    while ( q->data!=value && q->next!=NULL ){
        p=p->next;
        q=q->next;
        i++;
    }
    if (q->data==value){
        
    p->next=q->next;
    free(q);

    }

    else{
        printf("the given value is not in the linked List\n");
    }
    return head;

}



int main(){



    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));

    third=(struct Node *)malloc(sizeof(struct Node));

    fourth=(struct Node *)malloc(sizeof(struct Node));
    fifth=(struct Node *)malloc(sizeof(struct Node));

    head->data=9;
    head->next=second;

    second->data=8;
    second->next=third;

    third->data=4;
    third->next=fourth;

    fourth->data=7;

    fourth->next=fifth;

    fifth->data=23;

    fifth->next=NULL;

    linked_ListTraversal(head);

    head=deletionAtfirst(head);
    printf("linked List after deletion the first Node\n");
    linked_ListTraversal(head);

    head=deletionInBetween(head,2);

    printf("%s","Linked List after deletion the value of index at 2\n");
    linked_ListTraversal(head);

    printf("Linked List after deletion the value of the last index\n");

    head=deletionAtEnd(head);

    linked_ListTraversal(head);


    printf("Linked List after deletion the value which is given by user\n");

    head=deletionat_value(head,66);
    linked_ListTraversal(head);

    





    
    return 0;
}