#include <stdio.h>
void printNumbers(int arr[],int n);

int main(){
    int marks[3];
    printf("enter phy:");
    scanf("%d",&marks[0]);


    printf("enter chem:");
    scanf("%d",&marks[1]);
    


    printf("enter math:");
    scanf("%d",&marks[2]);

    printf("phy=%d,chem=%d,math=%d\n",marks[0],marks[1],marks[2]);

    //pointer arithmatic

    int age=22;
    int *ptr=&age;
    printf("%u\n",ptr);
    *ptr++;
    printf("%u\n",ptr);


    float price=100.9;
    float *pr=&price;
    printf("%u\n",pr);
    *pr++;
    printf("%u\n",pr);

    char star='*';

    char *str=&star;
    printf("%u\n",str);
    *str++;
    printf("%u\n",str);
    //we can also subtract one pointer from another pointer;
    //we can also compare two pointers

    int age1=23;
    int _age=35;
    int *ptr1=&age1;
    int *ptr2=&_age;

    printf("%u\n",ptr1);
    printf("%u\n",ptr2);
    printf("difference=%u\n",ptr1-ptr2);
    //its output is 1 because it returns the integer difference 1 whice is equal to 4 bytes

   //we can difference between same data type pointer

    ptr2=&age1;
    printf("comparison=%u\n",ptr1==ptr2);


    int arr[]={8,9,7};
    //here arr is pointer which locate the address of arr[0]
    int *ptr_=&arr[0];
    int *ptr_1=&arr;


    int aadhar[5];
    int *adr=&aadhar[0];
    //input
    for(int i=0;i<5;i++){
        printf("%d index:",i);
        scanf("%d",adr+i);
    }

    //output

    for(int i=0;i<10;i++){
        printf("%d  index=%d\n",i,*(adr+i));
    }

    //input

    for(int i=0;i<5;i++){
        printf("%d index:",i);
        scanf("%d",&aadhar[i]);
    }

    //output

    for(int i=0;i<10;i++){
        printf("%d  index=%d\n",i,aadhar[i]);
    }


    int Arr[]={1,2,3,4,5,6};
    printNumbers(Arr,6);




    return 0;
    

}


void printNumbers(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d \t ",arr[i]);
    }
}