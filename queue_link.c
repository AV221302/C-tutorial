#include <stdio.h>
#include <stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;
struct Node
{
   

    int data;
    struct Node *next;
};

int dequeue(){
int val=-1;
struct Node *ptr=f;
if(f==NULL){
    printf("the queue is empty\n");
}else{
    f=f->next;
    val=ptr->data;
}
free(ptr);
return val;
}

void linkedList_traversal(struct Node *ptr){
    printf("printing the element of the linked list\n");
   
    while(ptr!=NULL){
        printf("Element :%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void enqueue( int val)
{
    struct Node *n=(struct Node *)malloc(sizeof(struct Node));

    if(n==NULL){
        printf("the queue is full\n");
    }else{
        n->data=val;
        n->next=NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next=n; 
            r=n;
        }
    }
    
}
int main()
{
printf("the dequeued element is %d\n",dequeue());
enqueue(56);
enqueue(565);
enqueue(566);
linkedList_traversal(f);
printf("the dequeued element is %d\n",dequeue());
    return 0;
}