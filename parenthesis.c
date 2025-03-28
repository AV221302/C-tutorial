#include <stdio.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    
    char *arr ;
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

void push(struct stack *ptr,char value){
    if(isFull(ptr)){
        printf("the stack is full\n");
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
        
    }
}
char pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("the stack is underflow\n");
    }
    else{
         char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int match(char a,char b){
    if((a=='{' &&b=='}') ||
    (a=='(' && b==')' )||
    ( a=='[' && b==']')){
        return 1;
    }else{
        return 0;
    }
}
int parenthesisMatch(char *exp){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=100;
    s->arr=(char*)malloc(s->size*sizeof(char));

    for (int i=0;exp[i]!='\0';i++){
        char popped_ch;
        if((exp[i]=='(') 
        || (exp[i]=='{' )
        || (exp[i]=='[')){
            push(s,exp[i]);
        }
        else if(exp[i]==')' || exp[i]==']' || exp[i]=='}'){
            if(isEmpty(s)){
                
                free(s->arr);
        free(s);
        return 0;
            }
            else { 
                popped_ch=pop(s);
                if(!match(popped_ch,exp[i])){
                    return 0;
                    free(s->arr);
                    free(s);
                }

            }

        }
        
    }
    if(isEmpty(s)){
        return 1;
    }else{
        return 0;
    }
    free(s->arr);
    free(s);





}
int main(){
char *exp="8*(9)";
if(parenthesisMatch(exp)){
    printf("the parenthesis is  matching\n");
}
else{
    printf("the parethesis not matchhing\n");
}

}