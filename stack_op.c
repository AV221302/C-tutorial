#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }else{
        return 0;
    }


}

int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;

    }else{
        return 0;
    }
}



void Push(struct stack *ptr,int value){
    if (isFull(ptr)){
        printf("The stack is overflow\n");
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }


}

int  Pop(struct stack *ptr){
    if (isEmpty(ptr)){
        printf("The stack is underflow stack can not be popped\n  ");
    }else{
        return ptr->arr[ptr->top];
        
        ptr->top--;
      
    }


}

int peek(struct stack *sp,int i){
    int arrayInd=sp->top-i+1;
    if(arrayInd<0){
        printf("User index is invalid\n");
        return -1;
    }else{
        return sp->arr[arrayInd];
    }
}






int main(){
    struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=9;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));
    sp->arr[0]=1;
    sp->top++;


    sp->arr[1]=2;
    sp->top++;
    
    sp->arr[2]=5;
    sp->top++;
    if(isEmpty(sp)){
        printf("The stack is empty\n");
    }else{
        printf("The stack is not empty\n");
    }

    if(isFull(sp)){
        printf("The stack is full\n");

    }else{
        printf("the stack is not full\n");
    }
    for (int j=1;j<=sp->top+1;j++){
        printf("the value at %d is %d\n",j,peek(sp,j));
    }
        

Push(sp,56);
printf("stack after pushing\n");
for (int j=1;j<=sp->top+1;j++){
    printf("the value at %d is %d\n",j,peek(sp,j));
}
    
int Popped_val=Pop(sp);
printf("stack value  after popping\n");
printf("%d\n",Popped_val);


}

