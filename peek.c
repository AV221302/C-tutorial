#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

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
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));

    sp->top=-1;
    sp->size=6;
    sp->arr=(int *)malloc( sp->size*sizeof(int ));

    sp->arr[0]=5;
    sp->top++;

    sp->arr[1]=3;
    sp->top++;

    sp->arr[2]=4;
    sp->top++;


    for(int j=1;j<=sp->top+1;j++){
        printf("The value at %dis %d\n",j,peek(sp,j));
    }



    return 0;
}