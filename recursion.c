#include <stdio.h>

void printHW(int count);

int sum(int n);

int factorial(int m);
int main(){

    int count;
    count=6;
    printHW( count);

    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    sum(n);
    printf("the sum of %d numbers is %d\n",n,sum(n));

    int m;
    printf("the factorial of %d is %d\n",5,factorial(5));


}


void printHW(int count ){
    if(count==0){
        return;
    }
    printf("Hello World\n");
    printHW(count-1);
}

int sum(int n){

    if(n==1){
        return 1;
    }
    int sumNm1=sum(n-1);//sum of 1 to n-1
    int sumN=sumNm1+n;
    return sumN;

}

int factorial(int m){
    if(m==0 ||m==1){
        return 1;
    }
    int factorialNm1=factorial(m-1);
    int factorialN=factorial(m-1)*m;
    return factorialN;
}