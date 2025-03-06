#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int *arr;
};
int isFull(struct queue *ptr){
    if(ptr->r==ptr->size-1){
        return 1;
    }else{
        return 0;
    }
}
int isEmpty(struct queue *ptr){
    if(ptr->r==ptr->f){
        return 1;
    }else{
        return 0;
    }
}
void enqueue(struct queue *ptr,int n){
    if(isFull(ptr)){
        printf("the queue is overflow\n");
    }else{
       ptr->r++;

        ptr->arr[ptr->r]=n;
        

    }

}
void peek(struct queue *ptr){
    ptr->f=ptr->f+1;

    while(ptr->f<=ptr->r){
        printf("%d\n",ptr->arr[ptr->f]);
        ptr->f++;
    }
}

int dequeue(struct queue *ptr){
    int a=-1;
    if(isEmpty(ptr)){
        printf("the queue is empty\n");
        return a;
    }else{
        ptr->f++;
        a=ptr->arr[ptr->f];
    }

    return a;

}

int main(){
    struct queue q;
    q.size=5;
    q.f=q.r=-1;
    q.arr=(int *)malloc(q.size*(sizeof(int)));

    if(isEmpty(&q)){
        printf("the queue is empty\n");

    }else{
        printf("the queue is not empty\n");
    }

    enqueue(&q,34);
    enqueue(&q,15);

    enqueue(&q,23);

    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    
    if(isEmpty(&q)){
        printf("the queue is empty\n");

    }else{
        printf("the queue is not empty\n");
    }

    if(isFull(&q)){
        printf("the queue is full\n");

    }else{
        printf("the queue is not full\n");
    }
    return 0;


    
}