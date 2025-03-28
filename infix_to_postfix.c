#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack {
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack *ptr) {
    return ptr->top == -1;
}

int isFull(struct stack *ptr) {
    return ptr->top == ptr->size - 1;
}

char stackTop(struct stack *sp) {
    if (!isEmpty(sp)) {
        return sp->arr[sp->top];
    } else {
        return '\0';
    }
}

void push(struct stack *ptr, char value) {
    if (isFull(ptr)) {
        printf("The stack is full\n");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

char pop(struct stack *ptr) {
    if (isEmpty(ptr)) {
        printf("The stack is underflow\n");
        return '\0';
    } else {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

int precedence(char ch) {
    if (ch == '*' || ch == '/') {
        return 3;
    } else if (ch == '+' || ch == '-') {
        return 2;
    } else {
        return 0;
    }
}

char *infixToPostfix(char *infix) {
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));

    int i = 0; // track infix traversal
    int j = 0; // track postfix addition

    while (infix[i] != '\0') {
        if (!isOperator(infix[i])) {
            postfix[j++] = infix[i++];
        } else {
            while (!isEmpty(sp) && precedence(stackTop(sp)) >= precedence(infix[i])) {
                postfix[j++] = pop(sp);
            }
            push(sp, infix[i++]);
        }
    }

    while (!isEmpty(sp)) {
        postfix[j++] = pop(sp);
    }
    postfix[j] = '\0';

    return postfix;
}

int main() {
    char *infix = "8*9/5";
    printf("Postfix is %s\n", infixToPostfix(infix));
    return 0;
}