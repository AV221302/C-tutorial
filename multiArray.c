#include<stdio.h>

int countOdd(int arr[],int n);
void reverseArray(int array[],int m);
void printArray(int array[],int m);
void storeTable(int Arr[][],int n,int m,int number);


int main(){
    //2D array

    int marks[2][3];//_ _ _/_ _ _

    marks[0][0]=90;
    marks[0][1]=80;
    marks[0][2]=78;

    
    marks[1][0]=70;
    marks[1][1]=50;
    marks[1][2]=88;

    int arr[5]={1,3,4,5,6};
    printf("%d\n",countOdd(arr,5));

    int array[5]={1,2,3,4,5};
    //in this *(array+2) give 3 and *(array+5) give me 0

    int Array[5]={5,6,7,8,9};


    reverseArray(Array,5);
    printArray(Array,5);

    int p;

    int fib[p];
    fib[0]=0;
    fib[1]=1;
    printf("enter your number:");
    scanf("%d",&p);

    
    for(int i=2;i<p;i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d \t",fib[i]);
    }


    int Arr[2][10];
    storeTable(Arr,0,10,2);
    storeTable(Arr,0,10,3);

    for (int i=1;i<10;i++){
        printf("%d\t",Arr[1][i]);
    }
 

    
}

void storeTable(int Arr[][10],int n,int m,int number){
    for (int i=1;i<m;i++){
        Arr[n][i]=number*i;
    }
}







    





int countOdd(int arr[],int n){
    int count =0;
    for (int i=0;i<n;i++){
        if (arr[i]%2!=0){
            count ++;
            
        }


    
    }
    return count;
}
   void reverseArray(int array[],int m){
    for (int i=0;i<m/2;i++){
        int firstVal=array[i];
        int secondVal=array[m-i-1];
        array[i]=secondVal;
        array[m-i-1]=firstVal;
    }
   

   }


   void printArray(int array[],int m){
    for(int i=0;i<m;i++){
        printf("%d\t ",array[i]);
    }
   }