#include<stdio.h>
#include<math.h>

int main(){
    printf("hello world\n");

    int _a=34;
    float _b=5.7;
    char hastag='#';
    printf("%d\n",_a);
    int number;

    printf("Enter your number:");
    scanf("%d",&number);
    printf("your entered number is %d\n",number);

    int a=1,b=2;

    int sum=a+b;
    int multiply=a*b;
    int divide=a/b;
    int power=pow(a,b);
    int x=4+9*10;
    printf("the sum of numbers is %d\n ",sum);
    printf("the power of %d^%d is %d\n",a,b,power);
    printf("the value of x is %d\n",x);
    
    int y=4*3/6*2;
    printf("the value of y is %d\n",y);

    printf("%f\n",2.0*4);

//instruction:type declaration,arithmatic operation,control instrauction

//control instruction:sequence control,decision control,loop control,case control

//operator:a)Arithmatic Operator;b)Relation Operator;c)Logical Operator;d)Bitwise Operator;e)Assignment Operators;f)ternary Operator

int w=5;
int z=8;
printf("%d\n",w>z );

printf("%d\n",6>7 && 8>5);

printf("%d\n",6>8||7>5);

printf("%d",!(3>4));


    

}
