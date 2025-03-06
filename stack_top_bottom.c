#include<stdio.h>
#include<stdlib.h>

//in the push ,pop ,isempy,isfull,searching top and bottom all have the same time complexity which is O(1);

//in the peek the time complexity is O(1)  because this return only the index value
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
int main(){
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
sp->size=9;
sp->top=-1;
sp->arr=(int *)malloc(sizeof(sp->size*(sizeof(int))));

sp->arr[0]=3;
sp->top++;

sp->arr[1]=2;
sp->top++;

sp->arr[2]=9;
sp->top++;

sp->arr[3]=5;
sp->top++;

if(isEmpty(sp)){
    printf("The stack is empty\n");


}else{
    printf("the top value is %d\n",sp->arr[sp->top]);
}

if(isEmpty(sp)){
    printf("The stack is empty\n");


}else{
    printf("the bottom value is %d\n",sp->arr[0]);
}

return 0;
}

