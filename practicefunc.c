#include<stdio.h>
float celtofore(float n);
float calculatepercentage(float s, float m, float sn);
int fibonacci(int n);
int main(){

    float n=37.0;
    printf("the forenheit of %f  is %f\n",n,celtofore(37.0));

    float s;
    printf("Enter your marks in science:");
    scanf("%f",&s);

    float m;
    printf("Enter your marks in math:");
    scanf("%f",&m);


    float sn;
    printf("Enter your marks in sanskrit:");
    scanf("%f",&sn);

    printf("your  percentage is %f\n",calculatepercentage(s,m,sn));

    printf("%d",fibonacci(6));
    
    return 0;
}

float celtofore(float n){
    return n*1.8+32.0;
}


float calculatepercentage(float s ,float m, float sn){
    return (s+m+sn)/3;

}

int fibonacci(int n){
    if(n==0){
        return 0;

    }
    if(n==1){
        return 1;
    }

    int fibNm1=fibonacci(n-1);
    int fibNm2=fibonacci(n-2);
    int fibN=fibNm1+fibNm2;
    printf("fibonacci of %d is:%d\n",n,fibN);
    return fibN;
}
     