#include<stdio.h>
#include<stdlib.h>

struct circularQueue{
    int size;
    int f;
    int r;
    int *arr;

};

int isFull(struct circularQueue *ptr){
    if((ptr->r+1)%ptr->size==ptr->f){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(struct circularQueue *ptr){
    if(ptr->f==ptr->r){
        return 1;
    }else{
        return 0;
    }
}


void enqueue(struct circularQueue *ptr,int val){
    printf("the enqueued element is %d\n",val);
    if(isFull(ptr)){
        printf("the circularQueue is overflow condition\n");

    }else{
        ptr->r=(ptr->r+1)%ptr->size;
        ptr->arr[ptr->r]=val;

    }
}

int dequeue(struct circularQueue *ptr){
    int val=-1;
    if(isEmpty(ptr)){
        printf("the circularQueue is underflow condition\n");
    }else{
        ptr->f=(ptr->f+1)%ptr->size;

        val=ptr->arr[ptr->f];

    }
    return val;
}

int main(){

    struct circularQueue *q=(struct circularQueue*)malloc(sizeof(struct circularQueue));

    q->f=0;
    q->r=0;
    q->size=5;
    q->arr=(int *)malloc(q->size*(sizeof(int)));
if(isEmpty(q)){
    printf("the queue is empty\n");
}else{
    printf("the queue is not empty\n");
}
    enqueue(q,6);
    
    enqueue(q,6);
    
    enqueue(q,6);
    
    enqueue(q,6);
    if (isFull(q)){
        printf("the circular queue is full\n");

    }else{
        printf("the circular queue is not full\n");
    }
   
    if(isEmpty(q)){
        printf("the queue is empty\n");
    }else{
        printf("the queue is not empty\n");
    }

    printf("the dequeued element is :%d\n",dequeue(q));
    printf("the dequeued element is :%d\n",dequeue(q));
    printf("the dequeued element is :%d\n",dequeue(q));
    printf("the dequeued element is :%d\n",dequeue(q));
    

    enqueue(q,6);

    if(isEmpty(q)){
        printf("the queue is empty\n");
    }else{
        printf("the queue is not empty\n");
    }
    printf("%d\n",isFull(q));




    return 0;
}