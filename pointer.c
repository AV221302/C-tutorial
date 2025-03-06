#include<stdio.h>

//a variable that stores the memory address of another variable

//*means value at address operator & address of operator

int main(){
    int age=33;
    int *ptr=&age;
    int _age=*ptr;
    printf("%d\n",_age);
    printf("%p\n",ptr);

    //for char variable ,and fr float variable we define char and float ptr

    printf("%p\n",&age);//&age and ptr has same output

    printf("%u\n",&ptr);

    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));

    //pointer to pointer

    //this is also can be many types like int **ptr, char **ptr;float **pptr;
    int **pptr=&ptr;
    printf("%p\n",pptr);
    return 0;
}

