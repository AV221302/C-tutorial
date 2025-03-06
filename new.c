#include <stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *ptr){
    if(ptr->f==ptr->r){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct queue *ptr){
    if(ptr->r==ptr->size-1){
        return 1;

    }else{
        return 0;
    }
}

void enqueue(struct queue *ptr,int n){
    if(isFull(ptr)){
        printf("queue is  in the overflow condition\n");
    }else{
        ptr->r=ptr->r+1;
        ptr->arr[ptr->r]=n;
    }
}

int dequeue(struct queue *ptr){
    int a=-1;
    if(isEmpty(ptr)){
        printf("queue is in the underflow condition\n");
        return a;
    }else{
        ptr->f++;
        a=ptr->arr[ptr->f];
    }
    return a;
}

void peek(struct queue *ptr){
    ptr->f=ptr->f+1;

    while(ptr->f<=ptr->r){
        printf("%d\n",ptr->arr[ptr->f]);
        ptr->f++;
    }
}

int main(){
    struct queue *q=(struct queue*)malloc(sizeof(struct queue));

    q->size=5;
    q->f=-1;
    q->r=-1;
    q->arr=(int*)malloc(q->size*(sizeof(int)));

    printf("%d\n",isEmpty(q));

    q->arr[0]=3;
    q->r++;

    q->arr[1]=5;
    q->r++;

    q->arr[2]=4;
    q->r++;

    enqueue(q,5);
    enqueue(q,5);
    


// printf("the dequeued element is:%d\n",dequeue(q));
    
    printf("%d\n",isEmpty(q));

    peek(q);

    

  
    return 0;
}