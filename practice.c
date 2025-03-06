#include<stdio.h>
/*calculating the area of the square*/
int main(){
    float edge_square;
    printf("enter length of the edge:");
    scanf("%f",&edge_square,"\n");
    float area=edge_square*edge_square;
    printf("the area of the square is :%f\n",area);

    int x;
    printf("Enter your number:");
    scanf("%d",&x);
    if (x%2==0){
        printf("this number is devisible by 2");
    }else{
        printf("This number is not devisible by 2");

        
    }


   //invalid sentence:1)intx,int y=x
   //2)char stars="**"
    



    /*calculating the area of the circle*/

    float radius;
    printf("enter the radius of circle:");
    scanf("%f",&radius,"\n");
    float area_circle=3.14*radius*radius;
    printf("the area of the circle is :%f\n",area_circle);


    int a=1.999999;
    printf("the value of a is %d\n",a);



    
    int c;
    printf("Enter your number:");

    scanf("%d\n",&c);
    if (c>9 && c<100){
        printf("True");
    }




