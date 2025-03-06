#include <stdio.h>

void square(int n);

void _square(int *n);

void swap(int a,int b);

void _swap(int *a,int *b);
int main(){


    //call by value

    int number=4;
    square(number);

    printf("the value of number is %d\n",number);

    _square(&number);
    printf("number=%d\n",number);

    int x=3;
    int y=5;
    swap(x,y);

    printf("the original value of x is %d  and y is %d\n",x,y);



     int _x=3;
    int _y=5;
    _swap(&_x,&_y);

    printf("the  value of x is %d  and y is %d\n",_x,_y);


    return 0;

}

void square(int n){
    n=n*n;
    printf("the square is %d\n",n);

}

void _square(int *n){
    *n=(*n)*(*n);
    printf("the value of square is :%d\n",*n);
}

void swap(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("after the swaping the value of x is %d and value of y is %d\n",a,b);
}

void _swap(int *a , int *b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("after the swaping the value of x is %d and value of y is %d\n",a,b);
}