#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack {
    int size;
    int top;
    char **arr;
};

int isEmpty(struct stack *ptr) {
    return ptr->top == -1;
}

int isFull(struct stack *ptr) {
    return ptr->top == ptr->size - 1;
}

void push(struct stack *ptr, char *value) {
    if (isFull(ptr)) {
        printf("The stack is full\n");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

char *pop(struct stack *ptr) {
    if (isEmpty(ptr)) {
        printf("The stack is underflow\n");
        return NULL;
    } else {
        char *val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

char *postfixToInfix(char *postfix) {
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char **)malloc(sp->size * sizeof(char *));

    for (int i = 0; postfix[i] != '\0'; i++) {
        if (!isOperator(postfix[i])) {
            char *operand = (char *)malloc(2 * sizeof(char));

            operand[0] = postfix[i];
            operand[1] = '\0';
            push(sp, operand);
        } else {
            char *op2 = pop(sp);
            char *op1 = pop(sp);
            char *exp = (char *)malloc((strlen(op1) + strlen(op2) + 4) * sizeof(char));
            sprintf(exp, "(%s%c%s)", op1, postfix[i], op2);
            push(sp, exp);
            free(op1);
            free(op2);
        }
    }

    char *infix = pop(sp);
    free(sp->arr);
    free(sp);
    return infix;
}

int main() {
    char *postfix = "ABCD-*+";
    printf("Infix is %s\n", postfixToInfix(postfix));
    return 0;
}