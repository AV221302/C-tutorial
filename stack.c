#include <stdio.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;

};
int isEmpty(struct stack*ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }

}
int isFull(struct stack*ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }

}
int main(){
struct stack *s;
s->size=4;
s->top=-1;
s->arr=(int*)malloc(sizeof(int));
s->arr[0]=6;
s->top++;

s->arr[1]=5;
s->top++;

s->arr[2]=7;
s->top++;

s->arr[3]=4;
s->top++;

if(isEmpty(s)){
    printf("the stack is empty\n");
}else{
    printf("the stack is not empty\n");
}


if(isFull(s)){
    printf("the stack is full\n");
}else{
    printf("the stack is not full\n");
}

    return 0;

}