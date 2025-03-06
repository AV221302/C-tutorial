#include<stdio.h>
//declaration /prototype
void printHello();
void printTable(int n);
int sum(int x,int y);

void printPrize(float s);
int main(){

    printHello();//function call

    int x;
    printf("Enter first number:\n");
    scanf("%d",&x);
    int y;
    printf("Enter second number:\n");
    scanf("%d",&y);

    int a=sum(x,y);
    printf("The sum of two numbers:%d\n",a);


    int n;
    printf("Your number is:");
    scanf("%d",&n);
    printTable(n);//argument or actual number

    float s;
    printf("Enter the product price:");
    scanf("%f",&s);
    printPrize(s);


    printf("the product prize is:%f",s);//here we clearly see that in the argument first copy then use as function argument
    





    return 0;
}

//function definition
void printHello(){
    printf("Hello World");

    printf("My name is Avanish Kumar Patel");

}

int sum(int x,int y){
    return x+y;
}

void printTable(int n){
    
    for (int i=1;i<=10;i++){
        printf("%dX%d=%d\n",n,i,n*i);

    }
}

void printPrize(float s) {
    s=s+s*0.18;
    printf("the final prize is %f",s);
}
    
