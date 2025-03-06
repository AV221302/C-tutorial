#include<stdio.h>
int main(){

    // int n;
    // printf("Enter your number:");
    // scanf("%d",&n);
    // int product=1;
    // for( int i=1;i<=n;i++){
    //     product*=i;
    // }
    // printf("the factorial of %d is %d\n",n,product);
    
    char str[100];
    printf("Enter your str:");
    scanf("%s",str);
    printf("your str is %s",str);
    printf("the first character is %c\n",str[0]);

    int len=0;

    for(int i=0;str[i]!='\0';i++){
        len=len+1;

    }
    printf("the len of the str is %d\n",len);







    

   







    


    return 0;

    
}


