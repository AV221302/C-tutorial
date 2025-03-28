char *postfix_to_infix(char *postfix){
    if(!isOperator(postfix[i])){
        char *operand=(char*)malloc(sizeof(char));
        operand[0]=postfix[i];
        operand[1]='\0';
    }else{
        char *op2=pop(sp);
        char *op1=pop(sp);
        char *exp=(char*)malloc(sizeof(strlen(op2))+sizeof(strlen(op1)));
        sprintf(exp,("%s%c%s"),op1,operand[i],op2);
        push(sp,exp);
        free(op1);
        free(op2);


    }

    char *infix=pop(sp);
    free(sp->arr);
    free(sp);
    return infix;

}