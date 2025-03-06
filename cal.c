#include<stdio.h>
int isleapyear(int year){
    return (year%4==0 && year%100!=0) ||(year%400==0);

}

int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
        
    }
    return a;
}

int main(){
    int total_days,year,month,day;
    printf("enter total days :");
    scanf("%d",&total_days);
    year=1;
    int days_in_month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    while(total_days>365){
        if(isleapyear(year)){
            total_days-=366;
            year++;
        }else{
            total_days-=365;
            year++;
        }
    }
    
   month=0;
   while(total_days>days_in_month[month]){
    total_days-=days_in_month[month];
    month++;
   }

    day=total_days;
    printf("%d-%d-%d",day,month+1,year);
    if (isleapyear(year)){
        printf("the year %d is leapyear",year);

    }


    int a,b;
    printf("Enter two numbers:");
    scanf("%d, %d",a,b);
    while(1){
        if(a>0 && b>0){
            break;


        }
        else{
            printf("Enter two numbers:");
            scanf("%d,%d",a,b);
        }
    }

    printf("%d",gcd(a,b));


    






    
}