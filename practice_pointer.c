#include<stdio.h>
int main(){
    int x;
    int *ptr;
    ptr=&x;
    *ptr=0;
    printf("%d\n",x);
    printf("%d\n",*ptr);

    *ptr+=5;
    printf("%d\n",x);
    printf("%d\n",*ptr);



    (*ptr)++;
    printf("%d\n",x);
    printf("%d\n",*ptr);

    //accessing the value of any variable by the help of its pointer to pointer
    int i=5;
    int *ptr2=&i;
    int **pptr=&ptr2;
    int _i=**pptr;

    printf("%d\n",_i);



    

    return 0;






}