#include<stdio.h>
int main(){
     for (int i=1;i<10;i++){
        printf("%d\n",i);

        //++i (pre increment oprator)
        //i++ (post increment)

        //--i(pre decrement operator)
        //i--(post decrement operator)
     }

     //float loop
     for(float i=1.0;i<=5;i++){
        printf("%f\n",i);
     }
     //char loop

     for(char i='a';i<='z';i++){

        printf("%c\n",i);

     }

     //while loops
     int j=1;
     while(j<9){
        printf("hello world\n");
        j++;
     }
     

     int n;
     printf("Enter your number:");
     scanf("%d",&n);
    int k=0;
    while(k<=n){
        printf("%d\n",k);
        k++;
    }


    //do while

    int i=1;
    do{
        printf("%d\n",i);
        i++;
    } while(i<=5);


    //break ,continue

    for(int b=1;b<80;b++){
        if (i==3){
            break;
        }
        printf("%d\n",b);
    }

    printf("End of loop\n");

    //continue
    for(int i=1;i<10;i++){
        if(i==3){
            continue;
        }
        printf("%d\n",i);
    }




    return 0;
}